// 22.	Diamond Star Pattern
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout <<"Enter rows: ";
    cin>>n;
       for(int i=0;i<n;i++)
    {
        for(int k=0;k<n-i;k++)
            cout<<" ";
     for(int j=0;j<2*i+1;j++)
     {
      cout<<"*";
     }
     cout<<endl;
    }
       for(int i=n-1;i>0;i--)
   {
       for(int k=0;k<n+1-i;k++)
        cout<<" ";
       for(int j=0;j<2*i-1;j++)
       {
        cout<<"*";
       }

        cout<<endl;
   }
   }
