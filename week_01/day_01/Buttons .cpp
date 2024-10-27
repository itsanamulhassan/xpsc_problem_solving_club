#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, sum = 0;
    cin >> x >> y;
    if (x >= y)
    {
        sum += x;
        x--;
    }
    else
    {
        sum += y;
        y--;
    }
    sum += max(x, y);
    cout << sum;

    return 0;
}