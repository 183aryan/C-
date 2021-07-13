#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(auto &x: a) cin>>x;
        ll s1=0,s2=0;
        sort(a.begin(),a.end());
        while (k--)
        {
            s1 += a.back(); a.pop_back();
            s2 += a.back(); a.pop_back();
        }
        s2 += a.back();
        cout<<max(s1,s2);
    }
    return 0;
}