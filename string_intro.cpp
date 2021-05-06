#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;
    cin>>s1>>s2;
    int len1 = s1.length();
    int len2 = s2.length();
    cout<<len1<<endl;
    cout<<len2<<endl;    
    string result;
    result = s1 + s2 ;
    cout<<result<<endl;
    swap(s1[0],s2[0]);
    cout<<s1<<"\t"<<s2<<endl;

    return 0;
}