#include <iostream>
using namespace std;

class bank
{
    int principal;
    int time;
    int rate;
    float returnValue;

public:
    bank() {}
    bank(int p, int t, float r);
    bank(int p, int t, int r);
    void show();
    
};

bank :: bank(int p,int t,int r){
    principal = p;
        time = t;
        rate = float(r) / 100;
        returnValue = principal;
        for (int i = 0; i < t; i++)
        {
            /* code */
            returnValue = returnValue * (1 + rate);
        }
}
bank :: bank(int p,int t,float r){
    principal = p;
        time = t;
        rate = r;
        returnValue = principal;
        for (int i = 0; i < t; i++)
        {
            /* code */
            returnValue = returnValue * (1 + rate);
        }
}
void bank :: show(){
    cout << "The value after " << time << " years is " << returnValue << endl;
}

int main()
{
    bank b1, b2;
    int p, y, R;
    float r;

    cout << "Enter the value of p,y,r" << endl;
    cin >> p >> y >> r;
    b1 = bank(p, y, r);
    b1.show();

    cout << "Enter the value of p,y,R" << endl;
    cin >> p >> y >> R;
    b2 = bank(p, y, R);
    b2.show();

    return 0;
}