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

        string str;
        cin >> str;

        int left = 0,
            right = n - 1,
            answer = n;
        while (left <= right)
        {
            if (str[left] == str[right])
            {
                break;
            }
            else
            {
                answer -= 2;
                left++;
                right--;
            }
        }
        cout << answer << endl;
    }

    return 0;
}