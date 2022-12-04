/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i=1; i<=t; i++)
    {
        int original=i;
        int square = i*i;
        int cube = i*i*i;
        printf("%d %d %d\n", original, square, cube);
        printf("%d %d %d\n", original, square+1, cube+1);
    }

    return 0;
}
