#include <bits/stdc++.h>
using namespace std;
int n;
int X[100];
int check[100];
void inkq()
{
    for (int i = 1; i <= n; i++)
        cout << X[i];
    cout << " ";
}
void Try(int i)
{
    for (int j = n; j >= 1; j--)
    {
        if (!check[j])
        {
            X[i] = j;
            check[j] = 1;
            if (i == n)
                inkq();
            else
                Try(i + 1);
            check[j] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try(1);
        cout << "\n";
    }
}