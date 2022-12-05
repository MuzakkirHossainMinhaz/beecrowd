/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c, d, x, y;
        char op;

        scanf("%d / %d %c %d / %d", &a, &b, &op, &c, &d);

        switch(op)
        {
        case '+':
            x = a*d + c*b;
            y = b*d;
            break;
        case '-':
            x = a*d - c*b;
            y = b*d;
            break;
        case '*':
            x = a*c;
            y = b*d;
            break;
        case '/':
            x = a*d;
            y = b*c;
        }

        int multiplier=0;
        for(int i=1; i<=abs(min(x, y)); i++)
            if(x%i==0 && y%i==0)
                multiplier = i;

        printf("%d/%d = %d/%d\n", x, y, x/multiplier, y/multiplier);
    }

    return 0;
}
