/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int positiveNumbers = 0;
    for(int i=1; i<=6; i++)
    {
        float x;
        cin >> x;

        if(x>=0)
            positiveNumbers++;
    }

    printf("%d valores positivos\n", positiveNumbers);

    return 0;
}
