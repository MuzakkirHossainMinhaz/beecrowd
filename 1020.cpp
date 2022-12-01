/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int days;
    cin >> days;

    int year = days/365;
    days -= year*365;
    int months = days/30;
    days -= months*30;

    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}

