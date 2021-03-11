#include<stdio.h>
int main()
{
int t,n,p;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
scanf("%d\n",&n);
if(n%6==1)
{
n=n+11;
if(n%12==6)
n=n-12;
printf("\n%d WS", n);
continue;
}
if(n%6==2)
{
n=n+9;
if(n%12==5)
n=n-12;
printf("\n%d MS", n);
     continue;
}
if(n%6==3)
{
n=n+7;
if(n%12==4)
n=n-12;
printf("\n%d AS", n);
        continue;
}
if(n%6==4)
{
n=n+5;
if(n%12==3)
n=n-12;
printf("\n%d AS", n);
        continue;
}
if(n%6==5)
{
n=n+3;
if(n%12==2)
n=n-12;
printf("\n%d MS", n);
        continue;
}
if(n%6==0)
{
n=n+1;
if(n%12==1)
n=n-12;
printf("\n%d WS", n);
        continue;
}
}
return 0;
}
