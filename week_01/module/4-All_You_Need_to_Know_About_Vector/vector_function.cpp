#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> nums(n);

    // assign vector with default value
    // vector<int> nums(n + 5, -1);
    // assign existing vector with default value
    // nums.assign(n + 10, -2);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    // insert an element at the end of the vector
    nums.push_back(44);

    // remove an element at the end of the vector
    nums.pop_back();

    // gives the length or size of the vector
    int vector_size = nums.size();
    // cout << vector_size << endl;

    // gives the first element of the vector
    int first_element = nums.front();
    // cout << first_element << endl;

    // gives the last element of the vector
    int last_element = nums.back();
    // cout << last_element << endl;

    // clear all the element of the vector
    // nums.clear();

    // gives "1" when the vector is empty and gives "0" when the vector is not empty;
    int is_empty = nums.empty();
    // cout << is_empty << endl;

    // resize the vector length;
    // nums.resize(2);

    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}