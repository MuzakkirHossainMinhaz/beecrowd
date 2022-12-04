/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int scoreCount=0;
    double score, sum=0;
    while(true)
    {
        if(scoreCount>=2)
        {
            cout << fixed << setprecision(2) << "media = " << sum/2.0 << endl;;
            break;
        }

        cin >> score;

        if(score>=0.0 && score<=10.0)
        {
            sum += score;
            scoreCount++;
        }
        else
            cout << "nota invalida" << endl;
    }

    return 0;
}

