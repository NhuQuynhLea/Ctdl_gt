#include <bits/stdc++.h>
using namespace std;
int n, k;
int X[100];
void inkq()
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (X[i] == 1)
            dem++;
        if (dem > k)
            break;
    }
    if (dem == k)
    {
        for (int i = 0; i < n; i++)
            cout << X[i];
        cout << "\n";
    }
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        X[i] = j;
        if (i == n - 1)
            inkq();
        else
            Try(i + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Try(0);
    }
}