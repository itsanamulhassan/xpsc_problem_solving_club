#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    bool *primes = new bool[n + 1];
    primes[0] = 0;
    primes[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        primes[i] = 1;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (!primes[i])
        {
            continue;
        }
        for (int m = 2 * i; m <= n; m += i)
        {
            primes[m] = 0;
        }
    }

    vector<int> primes_vector;
    for (int i = 2; i <= n; i++)
    {
        if (primes[i])
        {
            primes_vector.push_back(i);
        }
    }

    int almost_prime_count(0);
    for (int i = 2; i <= n; i++)
    {
        int divisors = 0;
        for (int p = 0; p < primes_vector.size(); p++)
        {
            if (i % primes_vector[p] == 0)
            {
                ++divisors;
            }
        }
        if (divisors == 2)
        {
            ++almost_prime_count;
        }
    }

    cout << almost_prime_count << endl;

    return 0;
}