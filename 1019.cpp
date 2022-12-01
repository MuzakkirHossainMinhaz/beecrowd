/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int hours = n/3600;
    n -= hours*3600;
    int minutes = n/60;
    n -= minutes*60;
    int seconds = n;
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
