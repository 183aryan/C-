#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int a1[p];
    for (int i = 0; i < p; i++)
    {
        cin >> a1[i];
    }
    sort(a1, a1 + p);
    int q;  
    cin >> q;
    int a2[q];
    for (int i = 0; i < q; i++)
    {
        cin >> a2[i];
    }
    sort(a2, a2 + q);
    int b[p + q], c = 0;
    merge(a1, a1 + p, a2, a2 + q, b);

    sort(b, b + p + q);
    for (int i = 0; i < p + q; i++)
    {
        if (b[i] != b[i + 1])
        {
            c++;
        }
    }
    if (n == c)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}