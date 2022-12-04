/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        float a, b, c;
        cin >> a >> b >> c;

        float avg = (a*2+b*3+c*5)/10.0;

        printf("%.1f\n", avg);
    }

    return 0;
}

