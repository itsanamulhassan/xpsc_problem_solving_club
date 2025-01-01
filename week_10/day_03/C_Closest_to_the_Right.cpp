#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int q = 0; q < k; q++)
    {
        int x;
        cin >> x;

        int low = 0, high = n - 1, ans = -1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] >= x)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        if (ans != -1)
        {
            cout << 1 + ans << endl;
        }
        else
        {
            cout << 1 + n << endl;
        }
    }

    return 0;
    return 0;
}