#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // I want to print the tables of any number
    int i, j, num, lim;
    cout << "Please enter a number of your choice" << endl;
    cin >> num;
    cout << "Please enter the limit" << endl;
    cin >> lim;
    for (int i = 1; i < lim; i++)
    {
        /* code */
        cout << num << setw(2) << "*" << setw(2) << i << "=" << setw(4) << num * i << endl;
    }
}