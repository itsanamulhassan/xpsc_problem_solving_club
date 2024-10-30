#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t; // টেস্ট কেসের সংখ্যা
    while (t--)
    {
        int n;
        cin >> n; // অ্যারের আকার
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i]; // অ্যারের উপাদানগুলি
        }

        unordered_map<int, int> freq; // সংখ্যার ফ্রিকোয়েন্সি
        vector<int> result(n);
        int currentSize = 0;

        // প্রতিটি প্রিফিক্সের জন্য f(A) বের করা
        for (int i = 0; i < n; i++)
        {
            freq[A[i]]++;  // সংখ্যা গণনা করা
            currentSize++; // বর্তমান আকার বাড়ানো

            // সংখ্যার সংখ্যা দেখে মোট আকার নির্ণয় করা
            // একটি সংখ্যা 'k' বার দেখা গেলে, k/2 বার অপারেশন করা যাবে
            for (auto &pair : freq)
            {
                currentSize -= pair.second / 2; // প্রতি একাধিক সংখ্যা থেকে অপারেশন দ্বারা কমানো
            }

            result[i] = currentSize; // বর্তমান প্রিফিক্সের জন্য ফলাফল রাখা
        }

        // ফলাফল প্রদর্শন
        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
