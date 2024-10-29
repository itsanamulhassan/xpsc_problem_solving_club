#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long int sum = 0;
        vector<int> v(n);

        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
            sum += v[j];
        }

        // If the sum is even, we can keep all elements
        if (sum % 2 == 0)
        {
            cout << n << endl; // All elements can be kept
        }
        else
        {
            // If the sum is odd, we need to remove one odd element
            int oddCount = count_if(v.begin(), v.end(), [](int x)
                                    { return x % 2 != 0; });

            // If there are odd numbers, we can remove one to make the sum even
            if (oddCount > 0)
            {
                cout << n - 2 << endl; // Remove one odd number
            }
            else
            {
                cout << 0 << endl; // No odd numbers, cannot make the sum even
            }
        }
    }

    return 0;
}