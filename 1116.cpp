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

    while(t--)
    {
        int x, y;
        cin >> x >> y;

        if(y==0)
            cout << "divisao impossivel" << endl;
        else
            printf("%.1f\n", (float)x/y);
    }

    return 0;
}
