#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int N, X;
        cin >> N >> X;
        vector<int> A(N);
        for (int &a : A)
            cin >> a;

        // Frequency map for elements in A
        unordered_map<int, int> freq;
        for (int a : A)
            freq[a]++;

        // To track the maximum frequency of any element in A
        int original_max = 0;
        for (auto &p : freq)
            original_max = max(original_max, p.second);

        // To track the maximum subarray sum of a and a * X
        unordered_map<int, int> best_sum;

        // Iterate over each unique element a in the frequency map
        for (auto &p : freq)
        {
            int a = p.first;
            int x = a * X;

            // If x does not exist in the frequency map, skip it
            if (freq.find(x) == freq.end())
                continue;

            // Maximize subarray sum calculation (Kadane's algorithm or sliding window technique)
            // Only need to track subarray sums related to `a` and `x`
            int current_sum = 0;
            int max_sum = 0;

            // Update best_sum for current element `a`
            for (int num : A)
            {
                if (num == a)
                    current_sum++;
                else if (num == x)
                    current_sum--;

                // Ensure subarray sum doesn't go negative
                current_sum = max(current_sum, 0);
                max_sum = max(max_sum, current_sum);
            }

            // Candidate result considering max_sum subarray and frequency of `x`
            int candidate = freq[x] + max_sum;
            original_max = max(original_max, candidate);
        }

        cout << original_max << "\n";
    }

    return 0;
}
