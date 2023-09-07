#include<bits/stdc++.h>

using namespace std;

bool isLeap(int y)
{
    if (y%100 != 0 && y%4 == 0 || y %400 == 0)

    {

        return true;
    }

    else
    {
        return false;
    }
}


int offsetDays(int d, int m, int y)
{
    int offset = d;

    switch (m - 1)
    {
    case 11:
        offset += 30;
    case 10:
        offset += 31;
    case 9:
        offset += 30;
    case 8:
        offset += 31;
    case 7:
        offset += 31;
    case 6:
        offset += 30;
    case 5:
        offset += 31;
    case 4:
        offset += 30;
    case 3:
        offset += 31;
    case 2:
        offset += 28;
    case 1:
        offset += 31;
    }

    if (isLeap(y) && m > 2)
        offset += 1;

    return offset;
}


void revoffsetDays(int offset, int y, int *d, int *m)
{
    int month[13] = { 0, 31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31
                    };

    if (isLeap(y))
        month[2] = 29;

    int i;
    for (i = 1; i <= 12; i++)
    {
        if (offset <= month[i])
            break;
        offset = offset - month[i];
    }

    *d = offset;
    *m = i;
}

void addDays(int d1, int m1, int y1, int x)
{
    int offset1 = offsetDays(d1, m1, y1);
    int remDays = isLeap(y1)?(366-offset1):(365-offset1);


    int y2, offset2;
    if (x <= remDays)
    {
        y2 = y1;
        offset2 = offset1 + x;
    }

    else
    {

        x -= remDays;
        y2 = y1 + 1;
        int y2days = isLeap(y2)?366:365;
        while (x >= y2days)
        {
            x -= y2days;
            y2++;
            y2days = isLeap(y2)?366:365;
        }
        offset2 = x;
    }
    int m2, d2;
    revoffsetDays(offset2, y2, &d2, &m2);
    printf("%02d-%02d-%04d\n",d2,m2,y2);

}

int main()
{
    int d,m,y,t;
    int x;
    char a,b;
    scanf("%d",&t);
    int i;
    for(i=1; i<=t; i++)
    {
        //printf("ENTER DATE MONTH YEAR :\n");
        scanf("%d%c%d%c%d",&d,&a,&m,&b,&y);
        //printf("ENTER THE NUMBER DAYS TO BE ADDED\n");
        scanf("%d",&x);

        addDays(d, m, y, x);
    }
    return 0;
}
