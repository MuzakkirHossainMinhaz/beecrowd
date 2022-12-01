/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double d = (b*b)-(4*a*c);
    if(a==0.0 || d<0)
    {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    double R1 = (-b + sqrt(d)) / (a+a);
    double R2 = (-b - sqrt(d)) / (a+a);

    cout << fixed << setprecision(5);
    cout << "R1 = " << R1 << endl;
    cout << "R2 = " << R2 << endl;

    return 0;
}

