/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int result;

    if(a<b)
        result = b-a;
    else if (a==b)
        result = 24;
    else
        result = 24-(a-b);

    cout << "O JOGO DUROU " << result <<" HORA(S)" << endl;

    return 0;
}

