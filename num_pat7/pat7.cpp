// Number pattern 7

// 11011
// 11011
// 00000
// 11011
// 11011

#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter rows: ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
     if(i==n/2 || j==n/2)
     cout<<"0";
     else
     cout<<"1";
    }
    
    cout<<endl;
  }

}