
#include <bits/stdc++.h>
using namespace std;

vector longest_substring(const string &str, int k)
{

    if (str.length() == 0 || k < 0)
    {
        return {0};
    }

    int size = str.length();
    int start = 0;
    unordered_map map;
    int max_size = 0;
    int count = 0;
    char c;

    for (int i = 0; i < size; i++)
    {
        c = str[i];

        if (map.find(c) != map.end())
        {
            map[c]++;
        }
        else
        {
            map.insert({c, 1});
        }

        while (map.size() > k)
        {
            c = str[start];
            count = map[c];
            if (count > 1)
            {
                map[c]--;
            }
            else
            {
                map.erase(c);
            }
            start++;
        }

        max_size = std::max(max_size, i - start + 1);
    }

    return {start, max_size};
}