/* sum of odd and even numbers of a number if are divisible by 11 then the number is divisible by 11
ex: 165 -> 1+5 , 6 = 66 is divisble by 11 so 165 is divisible by 11
for first number do /
for last number do % */

#include<stdio.h>
int firstnum(int n)
{
    while (n>=10)
        n/=10;
    return n;
}

int main()
{
int n,a[99999],sumc=0,suml=0;
scanf("%d",&n);
for (int i=0; i<n; i++)
{
    scanf("%d",&a[i]);
}
for(int i=0; i<n/2; i++) // first number half
{
    if(i%2==0)
        sumc=sumc+firstnum(a[i]);
    else if(i%2!=0)
        suml=suml+firstnum(a[i]);
}
for(int i=n/2; i<n; i++) // last number half
{
    if(i%2==0)
        sumc=sumc+(a[i]%10);
    else if(i%2!=0)
        suml=suml+(a[i]%10);
}

if((sumc-suml)%11==0)
    printf("OUI");
else
    printf("NON");

return 0;
}
