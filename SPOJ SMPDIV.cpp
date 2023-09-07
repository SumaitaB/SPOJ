
#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,x,y,i,j,t,c;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld%lld",&n,&x,&y);
        for(j=2,c=1; j<n; j++,c++)
        {
            if((j%x==0)&&(j%y!=0))
            {
                printf("%lld",j);
                while(1)
            {
                    printf(" ");break;
            }
            }
        }
        printf("\n");
    }

    return 0;
}

