#include<string.h>
#include<stdio.h>
int main()
{
	int t,n,i,j,l,count=0;
	scanf("%d",&t);
	for(i =0;i<t;i++)
	{
		scanf("%d",&n);
		char a[n+1];
		scanf("%s",&a);
		l = strlen(a);
		for(j=0;j<l;j++)
		{
			 if(a[j]!='a'&&a[j]!='e'&&a[j]!='i'&&a[j]!='o'&&a[j]!='u'){

                if(a[j+1]=='a'||a[j+1]=='e'||a[j+1]=='i'||a[j+1]=='o'||a[j+1]=='u'){

                    count++;

                }

            }
		}
		printf("%d\n",count);
		count = 0;

	}
}
