/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double positive=0, sum=0;
    for(int i=0; i<6; i++)
    {
        double temp;
        cin >> temp;

        if(temp>=0)
        {
            positive++;
            sum += temp;
        }
    }

    cout << positive << " valores positivos" << endl;
    cout << fixed << setprecision(1) << sum/positive << endl;

    return 0;
}
