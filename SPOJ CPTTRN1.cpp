
#include<stdio.h>
#include<string.h>
int main()
{
    long long int j,k,i,t,r,c,x=0;
    char a[1000];
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&r,&c);
        for(j=1; j<=r; j++)
        {
            if(j%2==1)
            {
                for(k=1; k<=c; k++)
                {

                    if(k%2==1)
                    {
                        printf("*");
                        x++;

                    }
                    else if(k%2==0)
                    {
                        {
                            printf(".");
                            x++;
                        }
                    }
                    }
            }
                    else if(j%2==0)
                    {
                        for(k=1; k<=c; k++)
                        {
                            if(k%2==0)
                            {
                                printf("*");
                                x++;

                            }
                            if(k%2==1)
                            {
                                {
                                    printf(".");
                                    x++;
                                }
                            }
                        }
                    }
                    printf("\n");
                }
    }
        return 0;
    }

