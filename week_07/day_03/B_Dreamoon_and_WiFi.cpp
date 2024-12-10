#include <bits/stdc++.h>
using namespace std;

double my_factorial(int n)
{
    double output = 1;
    for (int p = 2; p <= n; p++)
    {
        output *= p;
    }
    return output;
}

int main()
{
    string sent;
    getline(cin, sent);
    string received;
    getline(cin, received);

    int desired = 0;
    for (char c : sent)
    {
        if (c == '+')
        {
            desired++;
        }
        else
        {
            desired--;
        }
    }

    int sure = 0, uncertain = 0;
    for (char c : received)
    {
        if (c == '+')
        {
            ++sure;
        }
        else if (c == '-')
        {
            --sure;
        }
        else if (c == '?')
        {
            ++uncertain;
        }
    }

    int diff = abs(desired - sure);

    if (diff > uncertain || (diff % 2 != uncertain % 2))
    {
        cout << "0.00000000000" << endl;
    }
    else
    {
        int dir = (uncertain + diff) / 2;
        double probability = my_factorial(uncertain) / (my_factorial(dir) * my_factorial(uncertain - dir));
        for (int p = 0; p < uncertain; p++)
        {
            probability /= 2.0;
        }
        cout.precision(11);
        cout << fixed << probability << endl;
    }

    return 0;
}
