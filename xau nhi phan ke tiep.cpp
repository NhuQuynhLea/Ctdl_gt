#include <bits/stdc++.h>
using namespace std;
string s;
int X[1005];
void Solve()
{
    int i = s.size() - 1;
    while (s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    if (i >= 0)
        s[i] = '1';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        Solve();
        cout << s;
        cout << "\n";
    }
}