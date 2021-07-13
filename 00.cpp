#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n,ar_mean,sum=0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if(sum < n)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << sum-n << endl;
        }
        
    }
    return 0;
}