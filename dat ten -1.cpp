#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<string> v(100);
int X[100];
void inkq()
{
    for (int i = 1; i <= k; i++)
        cout << v[X[i]] << " ";
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
    cin >> n >> k;
    string x;
    map<string, int> idx;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        idx[x]++;
    }
    for (auto i : idx)
        v.push_back(i.first);
    v.insert(v.begin(), 1, "");
    Try(1);
}