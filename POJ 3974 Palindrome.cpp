#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;
const unsigned long long zd=30007uLL;
unsigned long long h[1000001],p[1000001],xp[1000001];
char s[1000001];
int n;

unsigned long long askhash(int l,int r)
{
    if (l==0) return h[r];
    return h[r]-h[l-1]*xp[r-l+1];
}

unsigned long long askp(int l,int r)
{
    if (r==n-1) return p[l];
    return p[l]-p[r+1]*xp[r-l+1];
}


void inithash()
{
    h[0]=s[0];
    for(int i=1;i<n;i++)
        h[i]=h[i-1]*zd+s[i];
    p[n-1]=s[n-1];
    for(int i=n-2;i>=0;i--)
        p[i]=p[i+1]*zd+s[i];
}

bool check(int len)
{
    unsigned long long ht,pt;
    for (int i=0,l,r;i+len-1<n;i++)
    {
        l=i;
        r=i+len-1;
        ht=askhash(l,r);
        pt=askp(l,r);
        if (ht==pt) return true;
    }
    return false;
}

int main()
{
    xp[0]=1;
    for (int i=1;i<1000001;i++)
        xp[i]=xp[i-1]*zd;
    int tj=0;
    while (1)
    {
        cin>>s;
        if (s[0]=='E') break;
        n=strlen(s);
        for (int i=0;i<n;i++)
            s[i]=s[i]-'a'+1;
        inithash();
        vector<int> a,b;
        for(int i=1;i<=n;i++)
            if (i % 2) a.push_back(i); else b.push_back(i);
        int ans=0,l=0,r=a.size()-1,m;
        while (l<=r)
        {
            m=(l+r)>>1;
            if (check(a[m]))
            {
                l=m+1;
                ans=a[m];
            } else r=m-1;
        }
        l=0;
        r=b.size()-1;
        while (l<=r)
        {
            m=(l+r)>>1;
            if (check(b[m]))
            {
                l=m+1;
                ans=max(ans,b[m]);
            } else r=m-1;
        }
        tj++;
        cout<<"Case "<<tj<<':'<<' '<<ans<<endl;
    }
    return 0;
}
-----------------------------------
POJ 3974-Palindrome
https://blog.51cto.com/u_15127508/3628145
