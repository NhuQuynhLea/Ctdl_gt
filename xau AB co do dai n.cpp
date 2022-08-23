#include <bits/stdc++.h>
using namespace std;
int n;
int X[100];
void inkq()
{
    for (int i = 0; i < n; i++)
    {
        if (X[i] == 0)
            cout << 'A';
        else
            cout << "B";
    }
    cout << " ";
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
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try(0);
        cout << "\n";
    }
}