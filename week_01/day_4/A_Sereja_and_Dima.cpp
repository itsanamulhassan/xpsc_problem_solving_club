#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 0, right = n - 1, s_sum = 0, d_sum = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[left] > arr[right])
        {

            if (i % 2 == 0)
            {
                s_sum += arr[left];
            }
            else
            {
                d_sum += arr[left];
            }
            left++;
        }
        else
        {

            if (i % 2 == 0)
            {
                s_sum += arr[right];
            }
            else
            {
                d_sum += arr[right];
            }
            right--;
        }
    }

    cout << s_sum << " " << d_sum << endl;
    return 0;
}
