#include<bits/stdc++.h>
using namespace std;
int main()
{
    int date, month,year,x;
    int f, day;
    cin>>date>>month>>year;
    if((year%400==0)||(year%4==0&&year%100!=0))
    {
        x=1;
        cout<<"LEAP\n";
    }
    else
    {
        x=0;
         cout<<"NOT LEAP\n";
    }
    f=3+(2*x)*((month+2)/(2*month))+(5*month+month/9)/2;
    f=f%7;
    day=1.25*(year%100)+f+date-2*((year/100)%4);
    day=day%7;
    switch(day)
    {
    case 0:
        printf("SATURDAY\n");
        break;case 1:
        printf("SUNDAY\n");
        break;case 2:
        printf("MONDAY\n");
        break;case 3:
        printf("TUESDAY\n");
        break;case 4:
        printf("WEDNESDAY\n");
        break;case 5:
        printf("THURSDAY\n");
        break;case 6:
        printf("FRIDAY\n");
        break;
    }

    return 0;
}
