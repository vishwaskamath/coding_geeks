//remove charcters to create anagrams//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str1[10000], str2[10000];
    int t,i,j,k, count = 0;
    scanf("%d",&t);
    for(k =0;k<t;k++)
    {
        scanf("%s",&str1);
        scanf("%s",&str2);
        int l1 = strlen(str1);
        int l2 = strlen(str2);
        count = l1+l2;
        for(i =0;i<l1;i++)
        {
            for(j =0;j<l2;j++)
            {
                if(str1[i]==str2[j])
                {
                    str1[i]='$';
                    str2[j]='$';
                    count = count - 2;
                    break;
                }
            }
        }
            
        printf("%d\n",count);
    }
}
