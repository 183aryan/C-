#include<bits/stdc++.h>
using namespace std;

bool bdays(int x,int k){
    int n = x;
    int m = 0;
    while (x > 0) {
        m = m * 10 + x % 10;
        x /= 10;
    }
    int d = abs(n - m);
    d %= k ;
    return (d == 0);
   
}

int main(){
    int ns,nd,k,num=0;
    cin >> ns >> nd >> k;
    for ( int i = ns; i < nd; i++)
    {
        if(bdays(i,k)){
            num++;
        }
        
    }
    cout<< num << endl;
    return 0;
}