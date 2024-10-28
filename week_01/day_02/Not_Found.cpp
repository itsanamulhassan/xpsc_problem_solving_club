
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;

    vector<bool> presents(26, false);

    for (char c : s)
    {
        presents[c - 'a'] = true;
    }
    bool flag = false;

    for (int i = 0; i < 26; i++)
    {
        if (!presents[i])
        {
            cout << char(i + 'a') << endl;
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << "None" << endl;
    }

    return 0;
}
