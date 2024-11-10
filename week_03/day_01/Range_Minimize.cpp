#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int ans = arr[n - 1] - arr[2];

        ans = min(ans, arr[n - 2] - arr[1]);
        ans = min(ans, arr[n - 3] - arr[0]);

        cout << ans << endl;
    }
    return 0;
}