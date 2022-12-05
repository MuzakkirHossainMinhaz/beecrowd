/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while(x!=0)
    {
        cout << 1;

        for(int i=2; i<=x; i++)
            cout << " " << i;

        cout << endl;

        cin >> x;
    }

    return 0;
}
