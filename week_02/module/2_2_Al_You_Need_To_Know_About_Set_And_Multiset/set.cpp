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
    if (exist != s.end())
    {
        s.erase(3);
        cout << "erase successfully" << endl;
    }
    else
    {
        cout << 'not found' << endl;
    }

    return 0;
}