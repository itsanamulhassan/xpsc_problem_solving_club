#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, set<int>> mp;
    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(7);
    set<int> s2;
    s2.insert(4);
    s2.insert(5);
    s2.insert(6);
    set<int> s3;
    s3.insert(7);
    s3.insert(8);
    s3.insert(9);

    mp[5] = s1;
    mp[2] = s2;
    mp[1] = s3;

    for (auto [x, y] : mp)
    {
        cout << x << "--> ";
        for (auto value : y)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    int x = 5, y = 5;

    auto lb_1 = mp.lower_bound(x);

    if (lb_1 != mp.end())
    {
        cout << "Lower bound of " << x << " is " << lb_1->first << endl;

        auto lb_2 = mp[lb_1->first].lower_bound(y);

        if (lb_2 != mp[lb_1->first].end())
        {
            cout << "Lower bound of " << y << " in set of " << *lb_2 << endl;
        }
    }

    return 0;
}