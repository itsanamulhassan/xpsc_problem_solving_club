#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;

    // we do not use this way to insert a element to the map because there is a another easy way to do the same thing
    // mp.insert({20, 5});
    // mp.insert({34, 23});

    // easy way
    mp[10] = 20;
    mp[30] = 40;
    mp[30] = 44;
    mp[20] = 22;

    // cout << mp[20] << endl;
    // cout << mp[10] << endl;
    // cout << mp[30] << endl;

    // print with range based loop
    // for (auto [key, value] : mp)
    // {
    //     cout << key << " " << value << endl;
    // }

    // print with range based loop with iterator
    // for (auto it : mp)
    // {
    //     int key = it.first, value = it.second;
    //     cout << key << " " << value << endl;
    // }

    // print with iterator
    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     int key = it->first, value = it->second;
    //     cout << key << " " << value << endl;
    // }

    // find an element by key
    auto it = mp.find(35);

    // if (it == mp.end())
    // {
    //     cout << "Element not fount" << endl;
    // }
    // else
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // we can find the specific element by key but if there is no key or value available in the map then it will return a "0" zero by default and it will add with the map as a new element.

    // cout << mp[0] << endl; // there is no key available in the mqp, however, it gives a 0 by default.

    // erase the selected element by key
    mp.erase(10);

    // erase the selected element by iterator
    auto it_2 = mp.find(10);
    if (it_2 != mp.end())
    {
        mp.erase(it_2);
    }

    // gives the length of the map
    int mp_size = mp.size();

    // gives 0 if the map empty if not gives 1;
    int mp_empty = mp.empty();

    // clear all the elements from the map
    // mp.clear();

    mp[4] = 55;

    // gives the lower or equal key
    auto it_3 = mp.lower_bound(4);
    cout << it_3->first << " " << it_3->second << endl;

    // gives the greater key
    auto it_4 = mp.upper_bound(4);
    cout << it_4->first << " " << it_4->second << endl;

    return 0;
}