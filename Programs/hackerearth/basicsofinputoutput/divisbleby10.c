#include<stdio.h>
main()
{
	int n,i,b;
	int a[100000];
	scanf("%d",&n);
	for(int i =0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b = a[n-1]%10;
	if(b==0)
	{
		printf("Yes");
	}
	else
	printf("No");
}
