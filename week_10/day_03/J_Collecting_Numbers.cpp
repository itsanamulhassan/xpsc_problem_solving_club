#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int rounds = 0;
    int max_collected = 0;

    for (int i = 0; i < n; i++)
    {
        max_collected = max(max_collected, arr[i]);
        if (max_collected == i + 1)
        {
            rounds++;
        }
    }

    cout << rounds << endl;
    return 0;
}
