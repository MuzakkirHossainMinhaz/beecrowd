/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=1; i<10; i+=2)
    {
        for(int j=i+6; j>=i+4; j--)
            printf("I=%d J=%d\n", i, j);
    }

    return 0;
}
