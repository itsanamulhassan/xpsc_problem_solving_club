#include <bits/stdc++.h>
using namespace std;
int main()
{
    int interval, quantity, time, total_time, production;
    cin >> interval >> quantity >> time;
    total_time = time + 0.5;
    production = total_time / interval * quantity;
    cout << production << endl;

    return 0;
}