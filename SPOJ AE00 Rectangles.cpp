
#include<bits/stdc++.h>
using namespace std;
long long int a[10000+4][10000+4];
int main()
{
    long long int n,x,p,cnt=0,i,j;

    cin>>n;

    x=sqrt(n);
    if(n==1||n==2||n==3)
    {
        cout<<n<<endl;
    }
    else if(n==4||n==5)
    {
        cout<<n+1<<endl;
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            for(j=i; j<=n; j++)
            {
                if((i*j)<=n)
                {

                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
