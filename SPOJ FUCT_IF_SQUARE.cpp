
#include <stdio.h>
int main()
{
    long long int a,x,y,i,t;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&a);
        if(a<=0)
        {
            printf("the length of square's edge must be greater than 0\n");
        }
        else
        {
            x=a*a;
            y=4*a;
            printf("%lld %lld\n",y,x);
        }

    }
    return 0;
}


