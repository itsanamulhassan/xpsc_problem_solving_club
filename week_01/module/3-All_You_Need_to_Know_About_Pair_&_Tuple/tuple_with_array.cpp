#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    tuple<int, string, int, string> students[n];

    for (int i = 0; i < n; i++)
    {
        int index, roll;
        string name, phone;
        cin >> index >> name >> roll >> phone;
        // students[i] = make_tuple(index, name, roll, phone);
        students[i] = {index, name, roll, phone};
    }

    for (auto [idx, name, roll, phone] : students)
    {
        cout << idx << " " << name << " " << roll << " " << phone << endl;
    }

    return 0;
}