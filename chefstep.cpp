#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,i;
        cin>>n>>k;
        int arr[n];
        for ( i = 0; i < n; i++)
        {
            cin>>arr[i];
            if (arr[i] % k == 0)
            {
                /* code */
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
            
        }
        
    }
    return 0;
}