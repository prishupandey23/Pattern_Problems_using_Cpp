//19.Hollow Inverted Pyramid Star Pattern
// *********
//  *     *
//   *   *
//    * *
//     *

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
   int n, i, j,k;
   cout<<"Enter the no. of rows: ";
   cin>>n;
   for(int i=n;i>0;i--)
   {
       for(k=0;k<n-i;k++)
        cout<<" ";
       for(int j=0;j<2*i-1;j++)
       {
           if(i==n || i==1)
           cout<<"*";
           else
           {
               if(j==0 || j==2*i-2)
                cout<<"*";
               else
                cout<<" ";
           }
       }

        cout<<endl;
   }


   return 0;
}



