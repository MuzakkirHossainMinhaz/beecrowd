/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;

    int nota = int(n);
    int moeda = int(n*100)%100;

    cout << "NOTAS:" << endl;
    printf("%d nota(s) de R$ 100.00\n", nota/100);
    nota %= 100;
    printf("%d nota(s) de R$ 50.00\n", nota/50);
    nota %= 50;
    printf("%d nota(s) de R$ 20.00\n", nota/20);
    nota %= 20;
    printf("%d nota(s) de R$ 10.00\n", nota/10);
    nota %= 10;
    printf("%d nota(s) de R$ 5.00\n", nota/5);
    nota %= 5;
    printf("%d nota(s) de R$ 2.00\n", nota/2);
    nota %= 2;

    cout << "MOEDAS:" << endl;
    printf("%d moeda(s) de R$ 1.00\n", nota/1);
    moeda %= 100;
    printf("%d moeda(s) de R$ 0.50\n", moeda/50);
    moeda %= 50;
    printf("%d moeda(s) de R$ 0.25\n", moeda/25);
    moeda %= 25;
    printf("%d moeda(s) de R$ 0.10\n", moeda/10);
    moeda %= 10;
    printf("%d moeda(s) de R$ 0.05\n", moeda/5);
    moeda %= 5;
    printf("%d moeda(s) de R$ 0.01\n", moeda/1);
    moeda %= 1;

    return 0;
}
