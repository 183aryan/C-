#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num,a=-1,b=1,c,sum = 0;
    cout<<"Please enter the max series length"<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        /* code */
        c = a + b;
        cout<<c<<endl;;
        sum = sum + c;
        a = b;
        b = c;
    }
    cout<<"The sum of fibbonnacii series is"<<sum<<endl;
    return 0;
}