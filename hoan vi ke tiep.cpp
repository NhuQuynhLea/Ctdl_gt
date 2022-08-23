#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
int flag = 1;
void Solve()
{
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] > a[i - 1])
        {
            flag = 0;
            swap(a[i], a[i - 1]);
            sort(a + i, a + n);
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            break;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        flag = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solve();
        if (flag == 1)
        {
            for (int i = n - 1; i >= 0; i--)
                cout << i + 1 << " ";
        }
        cout << "\n";
    }
}