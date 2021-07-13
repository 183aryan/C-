#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
    T *a;
    int size;
    vector(int b){
        size = b;
        a = new T[size];
    }
    T dotProduct(vector v){
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + this->a[i] * v.a[i] ;
        }
        return d;
    }
};

int main(){
    vector <float> v1(3);
    v1.a[0] = 1.4;
    v1.a[1] = 3.3;
    v1.a[2] = 0.1;

    vector <float> v2(3);
    v2.a[0] = 0.1;
    v2.a[1] = 1.90;
    v2.a[2] = 4.1;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;


    
}