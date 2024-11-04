#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int name_length;
        cin >> name_length;
        string name;
        cin >> name;

        bool has_t = false, has_i = false, has_m = false, has_u = false, has_r = false;

        if (name_length != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int j = 0; j < name_length; j++)
            {
                if (name[j] == 'T')
                    has_t = true;
                else if (name[j] == 'i')
                    has_i = true;
                else if (name[j] == 'm')
                    has_m = true;
                else if (name[j] == 'u')
                    has_u = true;
                else if (name[j] == 'r')
                    has_r = true;
            }

            if (has_t && has_i && has_m && has_u && has_r)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}