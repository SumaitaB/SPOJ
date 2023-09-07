
#include <stdio.h>
#include<math.h>
int main()
{
    long long int t,i,a,b,x,x1,x2;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a==1&&b%2==1)
        {
            x=(b+1)/2;
        }
        else if(a==1&&b%2==0)
        {
            x=b/2;
        }
        else if(a>1&&b%2==0)
        {
            if((a-1)%2==0)
            {
                x1=(a-1)/2;
                x2=b/2;
                x=x2-x1;
            }
            if((a-1)%2==1)
            {
                x1=((a-1)+1)/2;
                x2=b/2;
                x=x2-x1;
            }

        }

        else if(a>1&&b%2==1)
        {
            if((a-1)%2==0)
            {
                x1=(a-1)/2;
                x2=(b+1)/2;
                x=x2-x1;
            }
            if((a-1)%2==1)
            {
                x1=((a-1)+1)/2;
                x2=(b+1)/2;
                x=x2-x1;
            }

        }
        printf("%lld\n",x);
    }
    return 0;
}




