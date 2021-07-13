#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0;
    int alice[3], bob[3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cin >> alice[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> bob[i];

        if (alice[i] > bob[i])
        {
            a += 1;
        }
      else if(alice[i]<bob[i]){
            b += 1;
      }
    }
    cout << a << " " << b << " " << endl;
    return 0;
}
