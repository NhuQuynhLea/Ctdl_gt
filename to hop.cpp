#include <bits/stdc++.h>
using namespace std;
long long C[1005][1005];
long long const mod = 1e9 + 7;
void Solve()
{
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            C[i][j] %= mod;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    Solve();
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << C[n][k] << "\n";
    }
}