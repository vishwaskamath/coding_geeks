#include <stdio.h>
#include<string.h>
int main(){
    char S[100];
    scanf("%s",S);
    int i,flag=0;
    int n=strlen(S);
    for(i=0;i<n;i++)
    {
		if(S[i]!=S[n-i-1])
		{
    		flag=1;
			break;
		}

    }
    if(flag)
    printf("NO");
    else
    printf("YES");
}
