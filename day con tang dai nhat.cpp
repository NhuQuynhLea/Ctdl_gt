#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int L[n + 1] = {};
    for (int i = 0; i < n; i++)
    {
        L[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
                L[i] = max(L[i], L[j] + 1);
        }
    }
    cout << *max_element(L, L + n);
}