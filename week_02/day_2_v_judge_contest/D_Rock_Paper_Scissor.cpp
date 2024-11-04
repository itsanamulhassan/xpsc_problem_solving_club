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
        string chef, chefina;
        cin >> chef >> chefina;

        int chef_count = 0, chefina_count = 0, draws = 0;

        for (int i = 0; i < n; i++)
        {
            if (chef[i] == chefina[i])
            {
                draws++;
            }
            else if ((chef[i] == 'R' && chefina[i] == 'S') ||
                     (chef[i] == 'S' && chefina[i] == 'P') ||
                     (chef[i] == 'P' && chefina[i] == 'R'))
            {
                chef_count++;
            }
            else
            {
                chefina_count++;
            }
        }

        if (chef_count > chefina_count)
        {
            cout << 0 << endl;
        }
        else
        {
            int needed_changes = (chefina_count - chef_count) / 2 + 1;
            cout << needed_changes << endl;
        }
    }

    return 0;
}
