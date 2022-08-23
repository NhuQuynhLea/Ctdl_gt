#include <bits/stdc++.h>
using namespace std;
int n, k;
int flag = 1;

void Try(int a[])
{
    int i = k;
    while (a[i] == n - k + i)
        i--;
    if (i < 1)
    {
        flag = 0;
        return;
    }
    a[i] += 1;
    for (int j = i + 1; j <= k; j++)
        a[j] = a[j - 1] + 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n + 1] = {};
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        Try(a);
        if (flag)
        {
            for (int i = 1; i <= k; i++)
                cout << a[i] << " ";
        }
        else
        {
            for (int i = 1; i <= k; i++)
                cout << i << " ";
        }
        cout << "\n";
    }
}
