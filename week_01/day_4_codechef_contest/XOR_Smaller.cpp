#include <iostream>
#include <vector>
using namespace std;

int get_positive_number(int n, vector<int> &A)
{
    int count = 0;

    for (int i = 0; i < 30; i++)
    {
        int mask = (1 << i);
        bool valid = true;

        for (int j = 0; j < n; j++)
        {
            if ((A[j] & mask) == 0)
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            count += (1 << i);
        }
    }

    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int result = get_positive_number(n, arr);
        cout << result << endl;
    }

    return 0;
}
