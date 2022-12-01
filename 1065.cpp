/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int evenNumbers = 0;
    for(int i=1; i<=5; i++)
    {
        int x;
        cin >> x;

        if(x%2==0)
            evenNumbers++;
    }

    printf("%d valores pares\n", evenNumbers);

    return 0;
}

