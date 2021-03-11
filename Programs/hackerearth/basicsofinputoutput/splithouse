#include<stdio.h>
main(){
	int t, temp = 0,i;
	scanf("%d",&t);
	char s[t];
	scanf("%s",&s);
	for(i = 0;s[i];i++)
	{
		if(s[i] == 'H' && s[i+1] == 'H')
		{
			temp = 1;
			break;
		}
		else if(s[i] == '.')
		{
			s[i] = 'B';
		}
	}
	if(temp == 0)
	{
		printf("YES\n");
		printf("%s",s);
	}
	else
	{
		printf("NO\n");
	}

}
