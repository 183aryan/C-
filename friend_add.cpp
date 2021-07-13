#include<iostream>
using namespace std;

class Y;

class X{
    int a;
    public:
      void setdata(int val){
          a = val;
      }
      friend void add(X , Y);
};

class Y{
    int b;
    public:
      void setdata(int val){
          b = val;
      }
      friend void add(X , Y);

};

void add(X x, Y y){
    cout<<"the sum of the given numbers is "<<x.a + y.b;
}

int main(){
    X x;
    Y y;
    x.setdata(39);
    y.setdata(71);

    add(x,y);
    return 0;
}