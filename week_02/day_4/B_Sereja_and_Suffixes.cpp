#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int> count(n + 1);
    set<int> st;
    for (int i = n; i >= 1; i--)
    {
        st.insert(v[i]);
        count[i] = st.size();
    }
    while (m--)
    {
        int x;
        cin >> x;
        cout << count[x] << endl;
    }
    return 0;
}