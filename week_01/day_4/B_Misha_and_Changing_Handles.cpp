#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<string, string>> users;
    for (int i = 0; i < n; i++)
    {
        string str1, str2;
        cin >> str1 >> str2;
        if (users.empty())
        {
            users.push_back({str1, str2});
        }
        else
        {
            bool flag = false;
            for (int i = 0; i < users.size(); i++)
            {
                string first = users[i].first;
                string second = users[i].second;
                if (str1 == second)
                {
                    users[i].second = str2;
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                users.push_back({str1, str2});
            }
        }
    }
    cout << users.size() << endl;
    for (pair<string, string> user : users)
    {
        cout << user.first << " " << user.second << endl;
    }
    return 0;
}