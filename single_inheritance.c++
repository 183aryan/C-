#include <iostream>
using namespace std;

class employee
{
    int id;

public:
    int extra_working;
    void setdata(int, int);
    int getdata1();
    int getdata2();
};
void employee ::setdata(int num, int work)
{
    id = num;
    extra_working = work;
}
int employee ::getdata1()
{
    return id;
}
int employee ::getdata2()
{
    return extra_working;
}

class programmer : public employee
{
    int data;

public:
    void process();
    void display();
};

void programmer ::process()
{
    data = extra_working * 500;
}

void programmer ::display()
{
    cout << "Hello Dear, your ID is " << getdata1() << endl;
    cout << "Congo,Your extra salary of this month rather than regular salary of the month is Rs " << data << " only" << endl;
    // cout<<getdata1()<<endl;
    // cout<<data<<endl;
}

int main()
{
    programmer aryan;
    int num, work;
    cout << "Please Enter your details for further process." << endl;
    cin >> num;
    cin >> work;
    aryan.setdata(num, work);
    aryan.process();
    aryan.display();
    return 0;
}