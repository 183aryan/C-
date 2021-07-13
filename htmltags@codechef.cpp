#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string ans = "Success";
        if (s.size() <= 3)
        {
            ans = "Error";
        }
        else if (s[0] != '<' || s[1] != '/')
        {
            ans = "Error";
        }
        // else if(s[2] == '/'){
        //     ans = "Error";
        //     break;
        // }
        else if (s[s.size() - 1] != '>')
        {
            ans = "Error";
        }
        else
        {
            for (int i = 2; i < s.size() - 1; i++)
            {
                if (!(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9'))
                {
                    ans = "Error";
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}