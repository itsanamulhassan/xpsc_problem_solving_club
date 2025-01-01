#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin >> s;

    unordered_map<char, int> freq;
    for (char c : s)
    {
        freq[c]++;
    }

    char odd_char = 0;
    int odd_count = 0;
    for (auto &p : freq)
    {
        if (p.second % 2 != 0)
        {
            odd_count++;
            odd_char = p.first;
        }
    }

    if (odd_count > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string half = "", middle = "";
    for (auto &p : freq)
    {
        string temp(p.second / 2, p.first);
        half += temp;
        if (p.second % 2 != 0)
        {
            middle = p.first;
        }
    }

    string palindrome = half + middle + string(half.rbegin(), half.rend());
    cout << palindrome << endl;
    return 0;
}