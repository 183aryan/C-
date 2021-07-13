#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll a[n],sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                a[i] = sum / i;
            }
            sum += a[i];
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}