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

        long long int arr[n];
        set<long long int> s;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr[i] = val;
            s.insert(val);
        }
        long long int left = 0, right = n - 1;

        while (right - left > 1)
        {
            long long int minimum = *s.begin(), maximum = *s.rbegin();

            if (arr[left] != minimum && arr[left] != maximum && arr[right] != minimum && arr[right] != maximum)
            {
                break;
            }
            if (arr[left] == minimum || arr[left] == maximum)
            {
                left++;
                s.erase(arr[left - 1]);
            }
            if (arr[right] == minimum || arr[right] == maximum)
            {
                right--;
                s.erase(arr[right + 1]);
            }
        }
        if (right - left > 1)
        {
            cout << left + 1 << " " << right + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}