#include <stdio.h>

#include<string.h>

int main(){

    int num,i,j,k,flag;

    scanf("%d\n",&num);

    for(i=0;i<num;i++){

        char a[100000],b[100000];

        scanf("%s %s",a,b);

        if(strlen(a)!=strlen(b))

            flag=1;

        else{

        for(j=0;j<strlen(a);j++){

			flag=1;

            for(k=0;k<strlen(b);k++)
			{

                	if(a[j]==b[k]){

                   	 	flag=0;

                   	 	b[k]='0';

						break;

                	}

            }

                if(flag==1)

                    break;

            }

            if(flag==1)

                printf("NO\n");

            else

                printf("YES\n");

        }

    }

}
