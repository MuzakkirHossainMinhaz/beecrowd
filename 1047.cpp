/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int start_time = a*60 + b;
    int end_time = x*60 + y;

    int result = end_time-start_time;

    if(result<=0)
        result += 24*60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", result/60, result%60);

    return 0;
}
