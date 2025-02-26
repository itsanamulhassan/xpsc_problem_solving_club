#include <bits/stdc++.h>
using namespace std;

const int BITS = 32;

long long dp(long long M, long long target)
{
    bool dp[BITS + 1][2]{};
    int pred[BITS + 1][2]{};
    int prevCarry[BITS + 1][2]{};

    dp[0][0] = true;

    for (int pos = 0; pos < BITS; pos++)
    {
        int tbit = (target >> pos) & 1;
        int mbit = (M >> pos) & 1;
        for (int carry = 0; carry < 2; carry++)
        {
            if (!dp[pos][carry])
                continue;
            for (int x = 0; x < 2; x++)
            {
                int sum = x + mbit + carry;
                int s = sum & 1;
                int ncarry = sum >> 1;

                if ((s ^ x) == tbit)
                {
                    dp[pos + 1][ncarry] = true;
                    pred[pos + 1][ncarry] = x;
                    prevCarry[pos + 1][ncarry] = carry;
                }
            }
        }
    }

    if (!dp[BITS][0])
        return -1;

    long long X = 0;
    int carry = 0;
    for (int pos = BITS; pos > 0; pos--)
    {
        int x_bit = pred[pos][carry];
        if (x_bit)
        {
            X |= (1LL << (pos - 1));
        }
        carry = prevCarry[pos][carry];
    }
    return X;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        if (a + b == c)
        {
            cout << "0\n";
            continue;
        }

        bool solved = false;
        long long Y = -1;
        int op_i = -1, op_j = -1;

        long long R = a ^ b;
        if (c >= R && ((c - R) & 1LL) == 0)
        {
            long long D = (c - R) / 2;
            if ((D & R) == 0)
            {
                Y = a ^ D;
                op_i = 1;
                op_j = 2;
                solved = true;
            }
        }

        if (!solved)
        {
            long long target = b ^ c;
            long long X = dp(a, target);
            if (X != -1)
            {
                Y = b ^ X;
                if (a + (b ^ Y) == (c ^ Y))
                {
                    op_i = 2;
                    op_j = 3;
                    solved = true;
                }
            }
        }

        if (!solved)
        {
            long long target = a ^ c;
            long long X = dp(b, target);
            if (X != -1)
            {
                Y = a ^ X;
                if ((a ^ Y) + b == (c ^ Y))
                {
                    op_i = 1;
                    op_j = 3;
                    solved = true;
                }
            }
        }

        if (solved)
        {
            cout << "1\n"
                 << op_i << " " << op_j << " " << Y << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}