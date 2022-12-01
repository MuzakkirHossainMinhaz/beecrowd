/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, in, out;
    cin >> t;

    in = out = 0;
    while(t--)
    {
        int x;
        cin >> x;

        if(x>=10 && x<=20)
            in++;
        else
            out++;
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}

