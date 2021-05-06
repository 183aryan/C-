#include <iostream>
using namespace std;

int main()
{
    int backlog, prgm_lang;
    float percent;
    string bapofall;
    cout << "Enter your whole backlog" << endl;
    cin >> backlog;

    cout << "Enter the programming language " << endl;
    cin >> prgm_lang;

    cout << "Enter your aggregate % "<< endl;
    cin>> percent;
    if (backlog == 0 && prgm_lang >= 2 && percent >= 80.00)
    {
        /* code */
        cout<<"Facebook"<<endl;
    }
    else if (backlog == 0 && prgm_lang == 2 && percent >= 70.00 )
    {
        /* code */
        cout<<"Amazon"<<endl;
    }
    else
    {
        /* code */
        cout<<"TCS jindabaad"<<endl;
    }
    return 0;
}