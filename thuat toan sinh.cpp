#include <bits/stdc++.h>
using namespace std;
int X[100];
int n;
void Xuat()
{
    for (int i = 0; i < n; i++)
        cout << X[i] << " ";
    cout << "\n";
}
int check()
{
    for (int i = 0; i < n; i++)
    {
        if (X[i] != X[n - 1 - i])
            return 0;
    }
    return 1;
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        X[i] = j;
        if (i == n - 1)
        {
            if (check() == 1)
                Xuat();
        }
        else
            Try(i + 1);
    }
}
int main()
{
    cin >> n;
    Try(0);
}