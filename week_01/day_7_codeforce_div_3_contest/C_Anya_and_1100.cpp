#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int index;
            char value;
            cin >> index >> value;

            str[index - 1] = value;
            bool flag = false;

            if (str == "1100")
            {
                flag = true;
            }
            else
            {
                for (int j = 0; j <= (int)str.size() - 4; j++)
                {
                    string sub_str = str.substr(j, 4);

                    if ("1100" == sub_str)
                    {
                        flag = true;
                        break;
                    }
                }
            }

            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
