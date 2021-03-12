#include<stdio.h>
int main(){
	int SH,SM,EH,EM,t,i,hour=0,minutes=0,a,b,c;
	scanf("%d",&t);
	for(i = 0;i < t; i++)
	{
		scanf("%d%d%d%d",&SH,&SM,&EH,&EM);
		a = (SH * 60) + (SM);
		b = (EH * 60) + (EM);
		c = b - a;
		hour = c/60;
		minutes = c%60;
		printf("%d %d\n",hour,minutes);

	}
}
