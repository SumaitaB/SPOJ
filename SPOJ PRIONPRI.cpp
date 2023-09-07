#include <stdio.h>
int main()
{
    long long int t,j,l,a,x,i,d;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        a=0;
        scanf("%lld",&x);
        for(j=1; j*j<=x; j++)
        {
            d=x/j;

            if(x%j==0&&d!=j)
            {
                a++;
            }
            if(x%d==0){a++;}
        }
        if(a==2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

