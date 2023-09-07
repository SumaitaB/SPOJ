
#include<stdio.h>
#include<string.h>
int main()
{
    long long int j,k,i,t,x;
    char a[1000];
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",&a);
        x=(strlen(a))/2;
        for(j=0; j<x; j++)
        {
            if(j%2==0)
            {
                printf("%c",a[j]);
            }

        }
        printf("\n");
    }

return 0;
}
