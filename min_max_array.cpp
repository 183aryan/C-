#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minm = arr[0];
    for (int i = 1; i < n; i++)
    {
        minm = min(minm, arr[i]);
    }
    int maxm = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxm = max(maxm, arr[i]);
    }
    cout << maxm << " ";
    cout << minm << " ";
    return 0;
}