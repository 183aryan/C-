#include <iostream>
using namespace std;

int main()
{
    int t, n, a[26] = {0};
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s;

            for (int j = 0; j < s.length(); j++)
            {
                a[s[j] - 'a']++;
            }
        }
        int c = 1;
        for (int i = 0; i < 26; i++)
        {
            if (a[i] % n != 0)
            {
                c = 0;
                break;
            }
        }
        cout << (c ? "YES":"NO") << endl;
    }
    return 0;
}