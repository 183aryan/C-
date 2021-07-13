#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            if (s[i]!='+' && s[j]!='+')
            {
                if (s[j]<s[i])
                {
                    swap(s[i],s[j]);
                }
                
            }
        } 
    }
    cout << s << endl;
    
    return 0;
}