/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(true)
    {
        int a, b;
        cin >> a >> b;

        if(a<=0 || b<=0)
            break;

        if(a>b)
            swap(a, b);

        int sum=0;
        for(int i=a; i<=b; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
    }

    return 0;
}

