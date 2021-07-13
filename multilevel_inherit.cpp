#include <iostream>
using namespace std;

class student
{
protected:
    string name;
    int roll;

public:
    void set_name(string);
    void get_name(void);
    void set_roll(int);
    void get_roll(void);
};
void student ::set_name(string n)
{
    name = n;
}
void student ::get_name()
{
    cout << "HELLO, Hey " << name << endl;
}
void student ::set_roll(int r)
{
    roll = r;
}
void student ::get_roll()
{
    cout << "The roll number of student is " << roll << endl;
}
class exam : public student
{
protected:
    int physics;
    int chemistry;
    int maths;

public:
    void set_marks(int p, int c, int m)
    {
        physics = p;
        chemistry = c;
        maths = m;
    }
    void get_marks(void)
    {
        cout << "Your obtained marks in physics is " << physics << " , in chemistry is " << chemistry << " and in maths is " << maths << endl;
    }
};
class result : public exam
{
protected:
    float percent;

public:
    void display_result(void)
    {
        cout << "Hey,Your result is " << (maths + physics + chemistry) / 3 << " % ." << endl;
    }
};

int main()
{
    result aryan;
    aryan.set_name("Aryan Kumar Choudhary");
    aryan.get_name();
    
    aryan.set_roll(14);
    aryan.get_roll();

    aryan.set_marks(93, 90, 95);
    aryan.get_marks();

    aryan.display_result();

    return 0;
}
