#include<stdio.h>
int main(){
	long long int p=1;
	long long int i,j,n;
	long long int a[1001];
	scanf("%d",&n);
	for(i =0;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(j = 0;j<n;j++)
	{
	      p = (p * a[j])%(1000000007);
	}
	printf("%lld",p);
	return 0;
}
