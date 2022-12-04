/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool terminate = true;

    while(terminate)
    {
        int x, y;
        cin >> x >> y;

        if(y>x)
            cout << "Crescente" << endl;
        else if(x>y)
            cout << "Decrescente" << endl;
        else
            terminate = false;
    }

    return 0;
}
