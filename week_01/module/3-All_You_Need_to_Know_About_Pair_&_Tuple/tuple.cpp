#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // way to assign data
    // tuple<int, string, int> student = make_tuple(0, "abay", 32);
    tuple<int, string, int> student = {1, "abay", 31};

    // reassign value;
    // student = make_tuple(4, "nomie", 44);

    // // traditional way to print
    // cout << get<0>(student) << " " << get<1>(student) << " " << get<2>(student) << endl;

    // modern way to print
    auto [index, name, roll] = student;
    cout << index << " " << name << " " << roll << endl;

    return 0;
}