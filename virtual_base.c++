#include <iostream>
using namespace std;

class student
{
protected:
    int roll;

public:
    void set_roll(int r)
    {
        roll = r;
    }
    void get_roll()
    {
        cout << "Your Roll number is " << roll << endl;
    }
};
class test : virtual public student
{
protected:
    int physics;
    int maths;
    int chemistry;

public:
    void set_marks(int p, int m, int c)
    {
        physics = p;
        maths = m;
        chemistry = c;
    }
    void get_marks()
    {
        cout << "Physics : " << physics << endl;
        cout << "Maths : " << maths << endl;
        cout << "Chemistry : " << chemistry << endl;
    }
};
class PhyE : virtual public student
{
protected:
    int score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void get_score()
    {
        cout << "PhE : " << score << endl;
    }
};
class result : public test, public PhyE
{
protected:
    int total;

public:
    void display()
    {
        total = physics + maths + chemistry + score;
        get_roll();
        get_marks();
        get_score();
        cout << "Your total score is : " << total << endl;
    }
};

int main()
{
    result aryan;
    aryan.set_roll(9);
    // aryan.get_roll();
    aryan.set_marks(93, 95, 90);
    // aryan.get_marks();
    aryan.set_score(98);
    // aryan.get_score();
    aryan.display();
}