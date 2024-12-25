#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> permutation(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> permutation[i];
            permutation[i]--;
        }

        vector<bool> visited(n, false);
        priority_queue<int, vector<int>, greater<int>> cycle_lengths;

        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                int current_length = 0, current_index = i;
                while (!visited[current_index])
                {
                    visited[current_index] = true;
                    current_length++;
                    current_index = permutation[current_index];
                }
                cycle_lengths.push(current_length);
            }
        }

        if (cycle_lengths.size() == 1)
        {
            cout << "0" << endl;
            continue;
        }

        long long total_merge_cost = 0;

        while (cycle_lengths.size() > 1)
        {
            int smallest_cycle = cycle_lengths.top();
            cycle_lengths.pop();
            int second_smallest_cycle = cycle_lengths.top();
            cycle_lengths.pop();

            int merge_cost = smallest_cycle + second_smallest_cycle;
            total_merge_cost += merge_cost;
            cycle_lengths.push(merge_cost);
        }

        cout << total_merge_cost << endl;
    }

    return 0;
}
