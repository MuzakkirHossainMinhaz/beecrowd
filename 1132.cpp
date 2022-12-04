/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, sum=0;
    cin >> a >> b;

    int x = min(a, b), y = max(a, b);

    for(int i=x; i<=y; i++)
    {
        if(i%13!=0)
            sum += i;
    }

    cout << sum << endl;

    return 0;
}
