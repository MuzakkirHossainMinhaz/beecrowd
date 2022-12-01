/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double price;
    cin >> price;

    cout << fixed << setprecision(2);
    if(price<=2000.00)
        cout << "Isento" << endl;
    else if(price<=3000.00)
        cout << "R$ " << ((price-2000)/100.0)*8 << endl;
    else if(price<=4500.00)
        cout << "R$ " << 80 + ((price-3000)/100.0)*18 << endl;
    else
        cout << "R$ " << 80 + 270 + ((price-4500)/100)*28 << endl;

    return 0;
}
