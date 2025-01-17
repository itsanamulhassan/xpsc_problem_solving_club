#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long int x)
{
    if (x == 2 || x == 3 || x == 5)
    {
        return true;
    }
    if (x % 2 == 0 || x % 3 == 0 || x % 5 == 0)
    {
        return false;
    }
    for (long long int i = 7; i * i <= x; i += 2)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    const long long int N = 1e15;
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int d;
        cin >> d;
        long long x = 1, y = 1;
        for (long long i = d + 1; i <= N; i++)
        {
            if (is_prime(i))
            {
                x = i;
                break;
            }
        }
        y = x * x;
        for (long long i = x + d; i < x * x; i++)
        {
            if (is_prime(i))
            {
                y = i;
                break;
            }
        }
        long long res = x * y;
        cout << res << endl;
    }
}