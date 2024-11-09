#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pair<string, pair<int, string>> student = {"namiie", {1, "0132"}};
    string name = student.first, phone = student.second.second;
    int roll = student.second.first;

    cout << name << " " << roll << " " << phone << endl;

    return 0;
}