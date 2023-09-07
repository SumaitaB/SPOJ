#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int right(int x1,int y1,int x2,int y2,int x3,int y3)
{
    double a,b,c;
    a=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    b=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
    c=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
    //cout<<a<<endl; cout<<b<<endl; cout<<c<<endl;
int p,q,r;

    p=a*a;
    q=b*b;
    r=c*c;
     //cout<<a<<endl; cout<<b<<endl; cout<<c<<endl;

    if(((p+q)==r)||((p+r)==q)||((r+q)==p))
    {
        //cout<<"ret1"<<endl;
        return 1;
    }
    else
    {
        //cout<<"ret0"<<endl;
        return 0;
    }
}
int main()
{
    ll x1,x2,x3,x4,y1,y2,y3,y4,i,c=0;
    double a;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    cin>>x4>>y4;
    c+=right(x1,y1,x2,y2,x3,y3);

    c+=right(x1,y1,x2,y2,x4,y4);
 //cout<<c<<endl;
    c+=right(x4,y4,x2,y2,x3,y3);
 //cout<<c<<endl;
    c+=right(x1,y1,x4,y4,x3,y3);


    cout<<c<<endl;
    return 0;
}
