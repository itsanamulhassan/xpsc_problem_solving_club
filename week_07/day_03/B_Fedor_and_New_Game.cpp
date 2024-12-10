#include <bits/stdc++.h>
using namespace std;

vector<bool> convert_to_binary(int x)
{
    vector<bool> output;
    while (x > 0)
    {
        output.push_back(x % 2);
        x /= 2;
    }
    return output;
}

int compare_binary_vectors(const vector<bool> &first, const vector<bool> &second)
{
    int output = 0, p = 0;

    while (p < first.size() || p < second.size())
    {
        if (p < first.size() && p < second.size())
        {
            output += (first[p] != second[p]);
        }
        else if (p < first.size())
        {
            output += (first[p] != 0);
        }
        else if (p < second.size())
        {
            output += (second[p] != 0);
        }
        ++p;
    }

    return output;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(m + 1);
    for (int p = 0; p <= m; ++p)
    {
        cin >> v[p];
    }

    vector<bool> anchor = convert_to_binary(v[m]);

    int friends = 0;
    for (int p = 0; p < m; ++p)
    {
        if (compare_binary_vectors(anchor, convert_to_binary(v[p])) <= k)
        {
            ++friends;
        }
    }

    cout << friends << endl;

    return 0;
}
