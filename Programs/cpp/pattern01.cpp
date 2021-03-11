#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,j;
  cout<<"Enter the number of lines "<<endl;
  cin>>n;
  cout<<"Your patter is as follows "<<endl;
  for(i =1; i<=n; i++)
  {
  for(j =1; j<=i;j++)
    {
     cout<<"*";
    }
  cout<<endl;
  }
  
}
