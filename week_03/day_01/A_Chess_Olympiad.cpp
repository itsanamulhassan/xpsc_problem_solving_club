#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    int total_round = x + y + z;
    double team_points = x * 1 + y * 0.5, opponent_points = z * 1 + y * 0.5;
    if (total_round < 4)
    {
        team_points += (4 - total_round) * 1;
    }
    if (team_points > opponent_points)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}