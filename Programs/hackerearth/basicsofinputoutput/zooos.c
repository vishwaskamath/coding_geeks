#include<stdio.h>
#include<string.h>
int main(){
	char s[21];
	scanf("%s",s);
	int i,j,l;
	float x=0,y=0;
	l = strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]=='z')
		{
			x++;
		}
		else 
			y++;
		
	}
	if(x==(y/2))
	{
		printf("Yes");
	}
	else
	printf("No");
}
