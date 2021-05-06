#include <iostream>
#include <sstream>
using namespace std;

class complex
{
private:
    int a, b;
    friend complex databysum(complex o1, complex o2);/*yha friend ka declaration ho rha h, iss declaration ke baad iss class ka friend iss class ke private memebers ko bhi use kar sakta h.....*/

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printit()
    {
        cout << "the complex form of entered number is " << a << " + " << b << "i" << endl;
    }
};
complex databysum(complex o1, complex o2) /* yaha par hm aisa func bna rhe jiska pahle class se koi matlb nhi tha but ye uss class ka dost tha hence wo class ke private members ko bhi access kar sakta h........ye sab friend func ko private or public part me define hone ke baad ho sakta h*/
{
    complex o3;
    o3.setdata((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, c3;
    c1.setdata(14, 15);
    c1.printit();

    c2.setdata(23, 24);
    c2.printit();

    c3 = databysum(c1,c2);
    c3.printit();

    return 0;
}