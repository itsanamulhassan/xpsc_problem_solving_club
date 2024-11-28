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
        string s;
        cin >> s;
        string x = string(s.size(), '(') + string(s.size(), ')');
        string y = "";
        for (int i = 0; i < s.size(); i++)
        {
            y += "()";
        }

        if (x.find(s) == string::npos)
        {
            cout << "YES" << endl
                 << x << endl;
        }
        else if (y.find(s) == string::npos)
        {
            std::cout << "YES" << endl
                      << y << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}