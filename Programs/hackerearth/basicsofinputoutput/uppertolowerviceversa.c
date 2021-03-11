#include<stdio.h>
int main(){
	char s[100];
	int i;
	scanf("%s",&s);
	for(i=0;s[i]!=0;i++)
	{
		//lowercase to uppercase
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		else
		//upper to lower
		s[i] = s[i] + 32;
	}
	printf("%s",s);
}
