//21.Mirrored Half Diamond Star Pattern
//     *
//    **
//   ***
//  ****
// *****
//  ****
//   ***
//    **
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
        for(int k=n-1;k>i;k--)
            cout<<" ";
        for(int j=0;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int k=0;k<=i;k++)
            cout<<" ";
        for(int j=n-1;j>i;j--)
            cout<<"*";
        cout<<endl;
    }
}