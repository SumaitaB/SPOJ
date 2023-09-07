
# Include <iostream>
# include <string>
# include <stdio. h >
# include <cstring>
using namespace STD;
int next [1000009];
char B [1000009];
void build_next (char * B, int Len)
{
    int I = 0;
    int J = 0;
    For (INT I = 1; I <Len; I ++)
    {
        J = next [I-1];
        while (j = 1 & B [I]! = B [J])
        {
            J = next [J-1];
        }
        If (B [I] = B [J])
        {
            next [I] = J + 1 ;
        }
        else
        {
            next [I] = 0 ;
        }
    }
    int main ()
    {
        While (CIN> B)
        {
            If (B [0] = '. ')
            return 0;
            int tarsize = strlen (B);
            build_next (B, tarsize);
            If (tarsize % (tarsize-next [tarsize-1]) = 0)
            {
                cout <tarsize/(tarsize-next [tarsize-1]) <Endl ;
            }
            else
            {
                printf ("1 \ n") ;
            }
        }
        return 0 ;
    }
