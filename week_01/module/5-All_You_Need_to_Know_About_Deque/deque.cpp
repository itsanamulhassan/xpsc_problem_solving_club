#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    // deque<int> dq;
    // use like an array
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {

        // insert element dynamicly
        // int x;
        // cin >> x;
        // dq.push_back(x);

        // insert element like an array

        cin >> dq[i];
    }

    // insert an element to the front
    dq.push_front(10);

    for (auto d : dq)
    {
        cout << d << " ";
    }
    cout << endl;

    // remove an element to the front
    dq.pop_front();
    dq.pop_front();

    for (auto d : dq)
    {
        cout << d << " ";
    }
    cout << endl;

    // access the front element
    cout << dq.front() << endl;

    // access the back element
    cout << dq.back() << endl;

    // NOTE
    ////////////// BACK //////////////
    // -- insert to the back --> push_back()
    // -- remove from the back --> pop_back()
    // -- access back element --> back()

    ////////////// FRONT //////////////
    // -- insert to the front --> push_front()
    // -- remove from the front --> pop_front()
    // -- access front element --> front()

    return 0;
}