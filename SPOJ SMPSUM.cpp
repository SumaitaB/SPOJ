
#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b,x,y;
        scanf("%lld%lld",&a,&b);
       x=(b*(b+1)*((2*b)+1))/6;
       y=((a-1)*((a-1)+1)*((2*(a-1))+1))/6;
       printf("%lld\n",x-y);
        return 0;
    }


