#include <bits/stdc++.h>
using namespace std;

long MOD = 1e9 + 7, MAX_A = 100000;

long long get_factorial(int m)
{
    long long factorial = 1;
    for (long long i = 2; i <= m; i++)
    {
        factorial = (factorial * i) % MOD;
    }
    return factorial;
}

vector<long long> divisors()
{
    vector<long long> divisors(MAX_A + 1, 0);
    for (long long i = 1; i <= MAX_A; i++)
    {
        for (long long j = i; j <= MAX_A; j += i)
        {
            divisors[j]++;
        }
    }
    return divisors;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    long long factorial_m = get_factorial(m);

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> count_divisors = divisors();
    for (int i = 0; i < n; i++)
    {
        long long value = a[i] * factorial_m % MOD;

        cout << count_divisors[value % MAX_A] << " ";
    }
    cout << endl;

    return 0;
}
