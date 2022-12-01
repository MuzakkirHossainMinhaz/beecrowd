/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int positive, negative, odd, even;
    positive = negative = odd = even = 0;

    for(int i=0; i<5; i++)
    {
        int a;
        cin >> a;

        if(a>0)
            positive++;
        else if(a<0)
            negative++;

        if(a%2==0)
            even++;
        else
            odd++;
    }

    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negative << " valor(es) negativo(s)" << endl;

    return 0;
}
