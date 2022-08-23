#include <bits/stdc++.h>
using namespace std;
int check[1000006];
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (check[tmp] == 0)
        {
            v.push_back(tmp);
            check[tmp] = 1;
        }
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}