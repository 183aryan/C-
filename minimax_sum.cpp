#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,sum = 0;
    // cin>>n;
    long long int arr[5];
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin>>arr[i];
        sum = sum + arr[i];
    }
    // n = sizeof(arr[5]) / sizeof(arr[0])  ;
    sort(arr,arr+5);
    // for (int i = 0; i < 5; i++)
    // {
    //     /* code */
    // //     cout<<arr[i]<<" ";
    //}
    // cout<<endl;
    reverse(arr,arr+5);
    // for (int i = 0; i < 5; i++)
    // {
    //     /* code */
    //     // cout<<arr[i]<<" ";
    // }
    cout<<sum-arr[0]<<" "<<sum-arr[4]<<endl;
    
    
}