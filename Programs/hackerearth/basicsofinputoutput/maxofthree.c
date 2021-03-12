#include<stdio.h>
int main()
{
	int a,b,c,max=0;
	scanf("%d%d%d",&a,&b,&c);
	if(b>a && b>c)
	{
		max = b;
	}
	else if(c>a && c>b)
	{
		max = c;
	}
	else max = a;
	printf("%d",max);
}
