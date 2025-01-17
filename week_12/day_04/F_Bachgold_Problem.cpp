#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    bool three = false;
    if (n % 2)
    {
        three = true;
        n -= 3;
    }
    int twos = n / 2;
    int count = twos + three;
    cout << count << std::endl;
    while (twos--)
    {
        cout << "2 ";
    }
    if (three)
    {
        cout << "3";
    }
    cout << endl;

    return 0;
}