#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    const long max_limit = 1000000;
    long n;
    cin >> n;

    vector<int64_t> array(n);
    for (long i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    vector<bool> primes(max_limit + 1, true);
    primes[0] = primes[1] = false;
    for (long i = 2; i <= sqrt(max_limit); i++)
    {
        if (primes[i])
        {
            for (long m = i * i; m <= max_limit; m += i)
            {
                primes[m] = false;
            }
        }
    }

    for (long i = 0; i < n; i++)
    {
        int64_t input_root = sqrt(array[i]);
        if (primes[input_root] && input_root * input_root == array[i])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}