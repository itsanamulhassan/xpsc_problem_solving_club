
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int len_of_long_subarr(int A[], int N, int K)
    {
        unordered_map<int, int> mp;
        int sum = 0, max_count = 0;
        for (int i = 0; i < N; i++)
        {
            sum += A[i];
            if (sum == K)
                max_count = i + 1;
            if (mp.find(sum - K) != mp.end())
            {
                max_count = max(max_count, i - mp[sum - K]);
            }
            if (mp.find(sum) == mp.end())
                mp[sum] = i;
        }
        return max_count;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.len_of_long_subarr(a, n, k) << endl;
    }

    return 0;
}
