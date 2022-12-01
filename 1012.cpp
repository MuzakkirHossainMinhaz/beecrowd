/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

double triangle(double base, double height)
{
    return (base*height)/2.0;
}

double circle(double r)
{
    return 3.14159*r*r;
}

double trapezoid(double base1, double base2, double height)
{
    return ((base1+base2)/2.0)*height;
}

double square(double side)
{
    return side*side;
}

double rectangle(double side1, double side2)
{
    return side1*side2;
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangle(a, c) << endl;
    cout << "CIRCULO: " << circle(c) << endl;
    cout << "TRAPEZIO: " << trapezoid(a, b, c) << endl;
    cout << "QUADRADO: " << square(b) << endl;
    cout << "RETANGULO: " << rectangle(a, b) << endl;

    return 0;
}

