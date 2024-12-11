#include <bits/stdc++.h>
using namespace std;

// Disjoint Set Union (DSU) class to handle union-find operations
class DSU
{
public:
    vector<int> parent, rank;

    DSU(int n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; ++i)
        {
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]); // Path compression
        }
        return parent[x];
    }

    void unite(int x, int y)
    {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY)
        {
            // Union by rank
            if (rank[rootX] > rank[rootY])
            {
                parent[rootY] = rootX;
            }
            else if (rank[rootX] < rank[rootY])
            {
                parent[rootX] = rootY;
            }
            else
            {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

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

        vector<pair<int, int>> wells(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> wells[i].first >> wells[i].second;
        }

        // List to store edges with their times (Chebyshev distance)
        vector<tuple<int, int, int, int>> edges;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int x1 = wells[i].first, y1 = wells[i].second;
                int x2 = wells[j].first, y2 = wells[j].second;
                int time = max(abs(x1 - x2), abs(y1 - y2)); // Chebyshev distance
                edges.push_back({time, i, j});
            }
        }

        // Sort edges by the time (Chebyshev distance)
        sort(edges.begin(), edges.end());

        // Initialize DSU
        DSU dsu(n);
        int max_time = 0;

        // Kruskal's algorithm to find the MST
        for (auto &[time, u, v] : edges)
        {
            if (dsu.find(u) != dsu.find(v))
            {
                dsu.unite(u, v);
                max_time = max(max_time, time);
            }
        }

        // Output the result for this test case
        cout << max_time << '\n';
    }

    return 0;
}
