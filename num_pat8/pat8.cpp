// Number pattern 8
// 10001
// 01010
// 00100
// 01010
// 10001

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
     if(i==0 || i==n-1)
     {
       if(j==0 || j==n-1)
       cout<<"1";
       else
       cout<<"0";
     }
    if(i==n/2 && j==n/2)
      cout<<"1";
      else if(i==n/2)
      cout<<"0";
    
    if(i%2!=0)
    {
      if(j%2==0)
      cout<<"0";
      else
      cout<<"1";
    }
    }
    
    cout<<endl;
  }

}

