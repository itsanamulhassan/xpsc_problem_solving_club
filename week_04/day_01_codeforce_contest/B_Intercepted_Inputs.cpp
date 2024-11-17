#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

pair<int, int> find_grid_dimensions(int k)
{
    for (int n = 1; n <= sqrt(k); ++n)
    {
        if (k % n == 0)
        {
            int m = k / n;
            return {n, m};
        }
    }
    // return {1, k};
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        for (int i = 0; i < k; ++i)
        {
            int temp;
            cin >> temp;
        }
        auto [n, m] = find_grid_dimensions(k);
        cout << n << " " << m << endl;
    }
    return 0;
}
