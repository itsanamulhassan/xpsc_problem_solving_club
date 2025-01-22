#include <bits/stdc++.h>
using namespace std;
// this function check the bit either its on or off
int check_kth_bit_on_or_off(int n, int k)
{
    return (n >> k) & 1;
}
// this function print the all bits of given number

void print_on_and_off_bits(int n)
{
    for (int k = 30; k >= 0; k--)
    {
        if (check_kth_bit_on_or_off(n, k))
        {
            cout << "1" << " ";
        }
        else
        {
            cout << "0" << " ";
        }
    }
}
// this function turn on the given k;
int turn_on_kth_bit(int n, int k)
{
    return (1 << k) | n;
}

// this function turn off the given k -- my method
// int turn_off_kth_bit(int n, int k)
// {
//     return (1 << k) ^ n;
// }
// this function turn off the given k -- mentor method
int turn_off_kth_bit(int n, int k)
{
    return n & ~(1 << k);
}

int toggle_kth_bit(int n, int k)
{
    return n ^ (1 << k);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // cout << check_kth_bit_on_or_off(45, 4) << endl;
    // print_on_and_off_bits(14);
    // cout << turn_on_kth_bit(45, 4) << endl;
    // cout << turn_off_kth_bit(45, 3) << endl;
    cout << toggle_kth_bit(45, 4) << endl;
    cout << toggle_kth_bit(45, 5) << endl;
    return 0;
}