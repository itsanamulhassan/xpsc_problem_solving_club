#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.push(6);
    pq.push(6);
    // it gives the tap value of priority queue
    cout << pq.top() << endl;
    // it will remove the first element of the priority queue
    pq.pop();
    // it will give the first element of the priority queue
    cout << pq.top() << endl;

    // it will return the length of the priority queue
    cout << pq.size() << endl;

    // it will return 0 if the priority queue not empty ohter than return 1
    cout << pq.empty() << endl;

    // print the priority queue

    cout << "print priority queue --------->" << endl;

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}