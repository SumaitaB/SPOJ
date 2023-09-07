
#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,i,j,sum=0;
    char a[100000];
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        sum=0;
        scanf("%s",&a);
        for(j=0;j<strlen(a);j++)
        {
            sum+=(a[j]-48);
        }
        printf("%lld\n",sum);
    }
return 0;
}


