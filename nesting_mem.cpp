#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    /* data */
    string s;

public:
    void read(void);
    void check_bin(void);
    void compliment(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter the binary number of your choice" << endl;
    cin >> s;
}
void binary::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            /* code */
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary::compliment(void)
{
    check_bin();
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) == '0')
        {
            /* code */
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.display();
    b.compliment();
    b.display();

    return 0;
}