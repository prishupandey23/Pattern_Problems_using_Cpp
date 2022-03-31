// Number pattern 3
// 01010
// 01010
// 01010
// 01010
// 01010

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
     if(j%2==0)
     cout<<"0";
     else
     cout<<"1";
    }
    
    cout<<endl;
  }

}