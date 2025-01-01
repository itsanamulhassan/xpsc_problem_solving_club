#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

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
            if (arr[mid] <= x)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        if (ans != -1)
        {
            cout << ans + 1 << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}
