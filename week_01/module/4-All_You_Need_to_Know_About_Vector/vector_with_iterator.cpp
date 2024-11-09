#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    // auto it = numbers.begin();
    // cout << *it + 1 << endl;

    // print with iterator
    // for (auto it = numbers.begin(); it != numbers.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // auto last_element = --numbers.end();
    // cout << *last_element << endl;

    // reverse the vector
    reverse(numbers.begin(), numbers.end());

    // sort ascending order
    // sort(numbers.begin(), numbers.end());

    // sort descending order
    // sort(numbers.begin(), numbers.end(), greater<int>());

    // for (int number : numbers)
    // {
    //     cout << number << " ";
    // }

    // get the minimum element by iterator;
    auto minimum_element = min_element(numbers.begin(), numbers.end());
    // cout << *minimum_element << endl;

    // get the maximum element by iterator
    auto maximum_element = max_element(numbers.begin(), numbers.end());
    // auto maximum_element = *max_element(numbers.begin(), numbers.end());
    cout << *maximum_element << endl;

    return 0;
}