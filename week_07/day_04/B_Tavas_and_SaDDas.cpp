#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;
    long long m = n;

    long ans_a(1), ans_b(0);
    vector<int> digits;
    while (m > 0)
    {
        ans_a *= 2;
        digits.push_back(m % 10);
        m /= 10;
    }
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        ans_b = 2 * ans_b + (digits[i] == 7);
    }

    long ans = ans_a + ans_b - 1;
    cout << ans << endl;

    return 0;
}