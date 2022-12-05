/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, factorial=1;
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        factorial *= i;
    }

    cout << factorial << endl;

    return 0;
}
