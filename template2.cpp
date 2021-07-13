#include<iostream>
using namespace std;

template <class T>
class swapp{
    T a,b;
    public:
    int x,y;
    void setData(T x,T y){
        a = x;
        b = y;
    }
    void getData(){
        T temp;
        temp = a;
        a = b;
        b = temp;
        cout<<"The value of swapped a is "<<a<<" and b is "<<b<<endl;
    }
    
};

int main(){
    swapp<char> s1;
    int p,q;
    // er the 2nd value which you want to swap : ";
    // cin>>q;
    s1.setData('A','B');
    s1.getData();

    return 0;

}