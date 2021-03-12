#include<stdio.h>
int main(){
	int a ,b,t;
	int d =0, u=7;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		a = 0;
		scanf("%d",&a);
		
		int ad = a - d;//distance of A from call
		int ud = u - a; // distance of B from call
		if(ad<=ud)
		{
			printf("A\n");
			d = a;

		}
		else
		{
			printf("B\n");
			u = a;	
		}
		

	}
}
