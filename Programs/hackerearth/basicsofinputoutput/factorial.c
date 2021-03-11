#include<stdio.h>
int main(){
	int i,n,f = 1;
	scanf("%d",&n);
	i = 1;
	while(i<=n)
	{
		f*=i;
		i++;
	}
	printf("%d",f);
}
