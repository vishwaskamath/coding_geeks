
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string rev="";
    cin>>str;
    int l = (int)str.length();
    rev.resize(l);
    for(int i=0, j=l-1;i<l;i++,j--)
    {
        rev[i]=str[j];
    }
    cout<<rev;
    
    return 0;
}
