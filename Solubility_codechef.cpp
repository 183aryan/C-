#include <iostream>
using namespace std;

int main()
{
    int X, A, B;
    int litre;
    int x; // x is number of test cases.
    cin >> x;
    while(x--){
	    cin>>X>>A>>B;
	    cout<<(A+((100-X)*B))*10<<endl;
	}
	return 0;

  
}