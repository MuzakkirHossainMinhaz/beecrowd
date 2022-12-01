/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double arr[5] = {4.00, 4.50, 5.00, 2.00, 1.50};

    int code, price;
    cin >> code >> price;

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << arr[code-1]*price << endl;

    return 0;
}

