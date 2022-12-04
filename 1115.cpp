/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(true)
    {
        int x, y;
        cin >> x >> y;

        if(x==0 || y==0)
            break;

        if(x>0 && y>0)
            cout << "primeiro" << endl;
        else if(x>0 && y<0)
            cout << "quarto" << endl;
        else if(x<0 && y<0)
            cout << "terceiro" << endl;
        else
            cout << "segundo" << endl;
    }

    return 0;
}
