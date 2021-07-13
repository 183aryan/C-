#include <iostream>
#include <list>
using namespace std;

// template <class T>
void display(list<char> &l1)
{
    list<char>::iterator it;
    for (it = l1.begin(); it != l1.end(); it++)
    {
        /* code */
        cout << *it <<" ";
    }
}

int main()
{
    list<char> l1;
    l1.push_back('a');
    l1.push_back('c');
    l1.push_back('f');
    l1.push_back('i');
    l1.push_back('l');
    list<int> l2(3);
    list<int>::iterator item;
    item = l2.begin();
    *item = 44;
    item++;
    *item = 3;
    item++;
    *item = 9;
    item++;

    // l1.sort();
    display(l1);
    cout << endl;
    // l2.sort();
    // display(l2);ṇṇ
    cout << endl;
    // l1.merge(l2);
    // display(l1);
    return 0;
}