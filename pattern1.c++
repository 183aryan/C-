#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	//in right triangle way
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			/* code */
			cout << '*' ;
		}
		cout<<endl;
	}
	//in reverse dirn
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			/* code */
			cout << '*' ;
		}
		cout<<endl;
	}
	
	return 0;
}