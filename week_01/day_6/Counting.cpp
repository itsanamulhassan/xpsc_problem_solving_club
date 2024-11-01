#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, count = 0;
    cin >> a >> b;

    if (a <= b)
    {
        count = b + 1 - a;
    }

    cout << count << endl;

    return 0;
}