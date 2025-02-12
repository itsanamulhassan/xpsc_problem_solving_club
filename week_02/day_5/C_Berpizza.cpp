#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;

    set<pair<int, int>> s1, s2;
    map<int, set<int>> mm;
    int index = 1;

    for (int i = 1; i <= q; i++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int m;
            cin >> m;
            s1.insert({index, m});
            s2.insert({m, index});
            mm[m].insert(index++);
        }
        else if (type == 2)
        {
            pair<int, int> p = *s1.begin();
            cout << p.first << " ";
            s1.erase(s1.begin());
            s2.erase({p.second, p.first});
            mm[p.second].erase(p.first);
        }
        else if (type == 3)
        {
            pair<int, int> p = *s2.rbegin();
            int k = *mm[p.first].begin();
            cout << k << " ";
            s2.erase({p.first, k});
            s1.erase({k, p.first});
            mm[p.first].erase(mm[p.first].begin());
        }
    }

    return 0;
}
