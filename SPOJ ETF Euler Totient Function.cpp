
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,t;

    cin>>t;

    while (t--)
    {
        ll i,j,phi,s;

        cin>>n;

        phi=n;
        s=n;

        for(i=2; i*i<= n; i++)
        {
            if((n%i)==0)
            {
                phi=phi-(phi/i);
            }

            while(1)
            {
                if((n%i)==0)
                {
                    n=n/i;
                }
                else break;
            }
        }
        if(n>1)
        {
            phi=phi-(phi/n);
        }
        cout<<phi<<endl ;
    }
    return 0;
}
