link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/
//code

#include<stdio.h>
main(){
int n, cg, cp, s ,f, nc, i ,j, mincost, cost1, cost2;
mincost = 0;
cost1 = 0;
cost2= 0;
scanf("%d",&n);
for(i =0;i<n;i++)
{
	cg = cp = nc = 0;
	scanf("%d%d",&cg,&cp);
	scanf("%d",&nc);
	for(j=0;j<nc;j++)
  {
		scanf("%d%d",&f,&s);
			cost1 = cost1 + cg*f + cp*s;
			cost2 = cost2 + cp*f + cg*s;
	}
	if(cost1>cost2)
	{
		mincost = cost2;
	}
	else
	{
		mincost = cost1;
	}
	printf("%d\n",mincost);
	cost1 = 0;
	cost2 = 0;
	cg = 0;
	cp = 0;
	nc = 0;
}
}
