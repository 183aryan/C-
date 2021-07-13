#include <iostream>
// #include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int x;
       cin>>x;
       cin.ignore();
       char str[x][100];
       for (int i = 0; i < x; i++)
       {
           scanf("%s",str[i]);
       }
       int q=0;
       cout<<endl;
       for (int i = 0; i < x; i++)
       {
           if (str[i][0]>='a'&&str[i][0]<='z')
           {
               if (str[i][0]>='a'&&str[i][0]<='m')
               {
                   for (int j = 0; str[i][j] != '\0'; j++)
                   {
                       if (!(str[i][j]>='a'&&str[i][j]<='m'))
                       {
                           q = 1;
                           break;
                       }
                       
                   }
                   
               }
               else
               {
                   q = 1;
               }
               
           }
           else
           {
               if (str[i][0]>='N'&&str[i][0]<='Z')
               {
                   for (int j = 0; str[i][j] != '\0'; j++)
                   {
                        if (!(str[i][j]>='N'&&str[i][j]<='Z'))
                       {
                           q = 1;
                           break;
                       }
                   }
               }
               else
               {
                   q = 1;
               }
           }
           if (q==1)
           {
               /* code */
               break;
           }  
       }
       if (q==1)
       {
           cout<<"no"<<endl;
       }
       else
       {
           cout<<"yes"<<endl;
       }
    }
    return 0;
}