#include<stdio.h>
main(){
	int n,l,i,a;
	scanf("%d",&n);
	scanf("%d",&l);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a<l)
		{
			printf("NO\n");
		}
		else
		printf("YES\n");
	}
}
