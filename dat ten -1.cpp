#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<string> v;
int X[100];
void inkq()
{
    for (int i = 0; i < k; i++)
        cout << v[X[i]] << " ";
}
void Try(int i)
{
    for (int j = X[i - 1] + 1; j <= n - k + i + 1; j++)
    {
        X[i] = j;
        if (i == k - 1)
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
    // v.insert(v.begin(), 1, "");
    // int dd[100];
    // for (int i = 1; i <= k; i++)
    //     dd[i] = i;
    // while (1)
    // {
    //     int z = k;
    //     if (z < 1)
    //         break;
    //     for (int i = 1; i <= k; i++)
    //         cout << v[dd[i]] << " ";
    //     cout << "\n";
    //     while (dd[z] == n - k + z)
    //         z--;
    //     dd[z] += 1;
    //     for (int i = z + 1; i <= k; i++)
    //         dd[i] = dd[i - 1] + 1;
    // }

    Try(0);
}