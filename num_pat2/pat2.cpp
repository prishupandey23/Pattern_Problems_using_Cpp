// Number pattern 2
// 11111
// 00000
// 11111
// 00000
// 11111

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
     if(i%2==0)
     cout<<"1";
     else
     cout<<"0";
    }
    
    cout<<endl;
  }

}