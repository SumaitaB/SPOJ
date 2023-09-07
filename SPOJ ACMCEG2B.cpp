
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string a;
    int x,y,i,j,n,g;
    scanf("%d",&n);
    map<pair<int,int>,string > m;
    map<pair<int,int>,string > :: iterator it;
    while(n--)
    {
        scanf("%d%d",&x,&y);
        cin>>a;
        pair<int,int> p=make_pair(x,y);
        m[p]=a;
}


    scanf("%d",&g);
    while(g--)
    {
        scanf("%d%d",&x,&y);
        pair<int,int> z =make_pair(x,y);
        cout<<m[z]<<endl;
    }
    return 0;
}
