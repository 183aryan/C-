#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,i;
        cin>>n;
        
        int x;
        string s;
        cin>>s;
        // n = s.size();
        int freq[26]={0};
        for ( i = 0; i < n; i++)
        {
            x = s[i]-'a';
            freq[x]++;
        }
        int flag = 1; // for even times
        for ( i = 0; i < 26; i++) // 26 as alphabets are 26
        {
            if (freq[i]%2==1)
            {
                /* code */
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            /* code */
            cout<<"YES"<<endl; 
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}