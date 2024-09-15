#include <bits/stdc++.h>
using namespace std;

const int N = 2 * 1e7 + 10;
int dp[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    dp[1] = 0;

    for (int i = 2; i < N; i++)
    {
        dp[i] = 1 + dp[i - 1];
        if (i % 2 == 0) dp[i] = min(dp[i], 1 + dp[i / 2]);
        if (i % 3 == 0) dp[i] = min(dp[i], 1 + dp[i / 3]);
    }

    for (int caseNo = 1; caseNo <= t; caseNo++)
    {
        int n;
        cin >> n;

        cout << "Case " << caseNo << ": " << dp[n] << "\n";
    }

    return 0;
}
