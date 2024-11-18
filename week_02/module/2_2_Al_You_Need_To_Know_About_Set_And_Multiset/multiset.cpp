#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> ms;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    // for (auto value : ms)
    // {
    //     cout << value << " ";
    // }

    // it will erase all the elements if it is available.
    // ms.erase(2);

    // if you want to delete a single element, you will have to be use find to get iterator and by iterator has been deleted the single element.
    auto it = ms.find(2);
    if (it != ms.end())
    {
        // ms.erase(it);
    }

    // for (auto value : ms)
    // {
    //     cout << value << " ";
    // }

    // count is most important thing in multiset/
    // it will return the count of the element in the multiset.
    int count = ms.count(2);
    cout << count << endl;

    return 0;
}