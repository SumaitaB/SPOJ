#include <bits/stdc++.h>
using namespace std;
int pt[1000000+10];

void fail_func(string s)
{
    int i,j=0,k,n,c,sz=s.size();

    for(i=1; i<sz;)
    {
        if(s[i]==s[j])
            pt[i]=j+1,j++,i++;
        else if(j)
            j=pt[j-1];
        else
            pt[i]=0,i++;
    }
}

void kmp(string st,string pattern)
{
    int i=0,j=0;
    int flag=0;

    int szst=st.size();
    int szpt=pattern.size();
    vector <int> v;

    while(1)
    {
        if(i==szst)
            break;

        if(st[i]==pattern[j])
            i++,j++;
        else if(j)
            j=pt[j-1];
        else
            i++;

        if(j==szpt)
        {
            v.push_back(i-j+1);
        }
    }
    if(v.empty())
        printf("Not Found\n");
    else
    {
        printf("%d\n",v.size());
        for(i=0; i<v.size(); i++)
            printf("%d ",v[i]);
        printf("\n");
    }
}

int main()
{

    int t;
    int n;
    int id, k,m;
    string st,pattern;
    cin>>t;
    id=1;
    while(t--)
    {
        if(id!=1)
            printf("\n");

        cin>>st>>pattern;
        fail_func(pattern);
        kmp(st,pattern);
        id++;
    }
    return 0;
}
