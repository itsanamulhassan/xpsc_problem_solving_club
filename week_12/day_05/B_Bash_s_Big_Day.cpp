#include <bits/stdc++.h>
using namespace std;

vector<long> get_primes(long a)
{

    vector<bool> is_prime(a + 1, 1);
    is_prime[0] = is_prime[1] = 0;
    for (long i = 2; i * i <= a; i++)
    {
        if (!is_prime[i])
        {
            continue;
        }
        for (long j = 2 * i; j <= a; j += i)
        {
            is_prime[j] = 0;
        }
    }

    vector<long> pv;
    for (long i = 2; i <= a; i++)
    {
        if (is_prime[i])
        {
            pv.push_back(i);
        }
    }
    return pv;
}

int main()
{

    const long N = 1e5 + 2;
    vector<long> v(N, 0);
    long n;
    cin >> n;

    vector<long> prime_list = get_primes(N + 1);

    while (n--)
    {
        long a;
        cin >> a;

        for (int i = 0; i < prime_list.size(); i++)
        {
            if (a < i)
            {
                break;
            }
            long cur = prime_list[i];
            if (a % cur != 0)
            {
                continue;
            }
            ++v[cur];
            while (a % cur == 0)
            {
                a /= cur;
            }
        }
    }

    long max = 1;
    for (long i = 2; i < N; i++)
    {
        max = (max > v[i]) ? max : v[i];
    }
    cout << max << endl;

    return 0;
}