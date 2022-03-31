// Number pattern 9
// 01110
// 10001
// 10001
// 10001
// 01110
#include <iostream>
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
        cout<<"0";
        else
        cout<<"1";
      }
     else{
       if(j==0 || j==n-1)
       cout<<"1";
       else
       cout<<"0";
     }
    
    } cout<<endl;
  }
}
