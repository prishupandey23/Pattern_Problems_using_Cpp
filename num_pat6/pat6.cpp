// Number pattern 6
// 10101
// 01010
// 10101
// 01010
// 10101


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
     {
       if(j%2==0)
       cout<<"1";
       else
       cout<<"0";
     }
     else
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