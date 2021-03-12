#include<stdio.h>
int tonum(char n)
{
    switch(n)
    {
        case '0' :
            return 0;
        case '1' :
            return 1;
        case '2' :
            return 2;
        case '3' :
            return 3;
        case '4' :
            return 4;
        case '5' :
            return 5;
        case '6' :
            return 6;
        case '7' :
            return 7;
        case '8' :
            return 8;
        case '9' :
            return 9;
    }
}
int main()
{
    int t,i,j;
    int a[10]={6,2,5,5,4,5,6,3,7,6};
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {

        int sticks=0,temp=0;
        char n[101];
        scanf("%s",n);
        for(j=0;j<strlen(n);j++)
        {
                    temp=tonum(n[j]);
                    sticks=sticks+a[temp];
            
        }
        if(sticks%2==1)
        {
            sticks=sticks-3;
            printf("7");
        }
		// for one its 2 sticks
        sticks=sticks/2;
        while(sticks!=0)
        {
            sticks--;
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
