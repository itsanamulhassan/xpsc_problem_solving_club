#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // way to assign data
    // pair<string, int> student(make_pair("abdur rahim", 32));
    pair<string, int> student = {"abdur rahim", 32};

    // reassign value
    // student.first = "abdul karim";
    // student.second = 33;

    // // traditional way
    // string name = student.first;
    // int roll = student.second;

    // modern way
    auto [name, roll] = student;

    cout << name << " " << roll << endl;

    return 0;
}
