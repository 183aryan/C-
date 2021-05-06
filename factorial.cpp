#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        /* code */
        return 1;
    }
    else
    {
        /* code */
        return num * factorial(num - 1);
    }
}
int main()
{
    int i, j, num;
    cout << "Please enter the number to find factorial" << endl;
    cin >> num;
    cout << "The factorial of"<< num << "is"<< factorial(num) << endl;
    return 0;
}