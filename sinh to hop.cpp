#include <bits/stdc++.h>
using namespace std;
int X[100];
int n, k;
void inkq()
{
    for (int i = 1; i <= k; i++)
        cout << X[i];
    cout << " ";
}
void Try(int i)
{
    for (int j = X[i - 1] + 1; j <= n - k + i; j++)
    {
        X[i] = j;
        if (i == k)
            inkq();
        else
            Try(i + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Try(1);
        cout << "\n";
    }
}