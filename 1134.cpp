/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, alcohol=0, gasoline=0, diesel=0;

    while(1)
    {
        cin >> num;

        switch(num)
        {
        case 1:
            alcohol++;
            break;
        case 2:
            gasoline++;
            break;
        case 3:
            diesel++;
            break;
        case 4:
            cout << "MUITO OBRIGADO"<< endl;
            printf("Alcool: %d\n", alcohol);
            printf("Gasolina: %d\n", gasoline);
            printf("Diesel: %d\n", diesel);
            return 0;
        }
    }

    return 0;
}
