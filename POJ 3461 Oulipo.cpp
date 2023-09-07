#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

char w[10000+20], t[1000000+20];
int wlen, tlen, nx[10010];
void getnext()
{
    int j=0, k=-1;
    nx[0]=-1;
    while (j<wlen)
    {
        if (k==-1||w[j]==w[k])
        {
            nx[++j]=++k;
        }
        else
        {
            k=nx[k];
        }
    }
}
int KMP()
{
    int ans=0,i,j=0;
    if (wlen==1 && tlen==1)
    {
        if (w[0]==t[0])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    getnext();
    for (i=0; i<tlen; i++)
    {
        while (j>0&&t[i]!=w[j])
            j=nx[j];
        if (w[j]==t[i])
            j++;
        if (j==wlen)
        {
            ans++;
            j=nx[j];
        }
    }
    return ans;
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%s%s", &w, &t);
        wlen=strlen(w);
        tlen=strlen(t);

        printf("%d\n",KMP());
    }
    return 0;
}
