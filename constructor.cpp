#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void){
        a = 9;                              //************line no 10 to 11 likho ya 19 to 23 likho , perform same karega***************
        b = 73;
    } // ye constructor h jo ki same as class name ka hi hota h

    void printit()
    {
        cout << "The complex number is " << a << " + " << b << " i " << endl;
    }
};
// complex ::complex(void) // ye automatically invoke ho jate dosen't need to call
// {
//     a = 9;
//     b = 73;
// }

int main()
{
    complex c1, c2, c3;
    c1.printit();
    c2.printit();
    return 0;
}
