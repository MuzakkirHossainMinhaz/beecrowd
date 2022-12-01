/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

const double PI = 3.14159;

double volume(double r)
{
    return (4/3.0)*PI*r*r*r;
}

int main()
{
    double r;
    cin >> r;

    cout << "VOLUME = " << fixed << setprecision(3) << volume(r) << endl;

    return 0;
}

