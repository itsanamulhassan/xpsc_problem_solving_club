#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    // print with iterator
    for (auto it = s.begin(); it != s.end(); it++)
    {
        // cout << *it << endl;
    }

    // print with range based for loop
    for (auto value : s)
    {
        // cout << value << " ";
    }

    auto it = s.find(4);

    if (it != s.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    // if you want to erase a specific value, you have to check first that value exist or not. if is not, it will give a runtime
    auto exist = s.find(3);
    // we can use count instead of find, however, find gives the iterator and count gives the count of elements if there is no element it will return 0;
    if (exist != s.end())
    {
        s.erase(3);
        cout << "erase successfully" << endl;
    }
    else
    {
        cout << 'not found' << endl;
    }
    // this one gives the exact same value if the value available in the set. if the value not available in the set it will return immediate greater value.
    auto it_2 = s.lower_bound(5);
    // cout << *it_2 << endl;
    // it will return the exact greater value if the element available or not available.
    auto it_3 = s.upper_bound(4);
    cout << *it_3 << endl;

    return 0;
}