/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    n = (n%2!=0) ? n : n+1;

    for(int i=n; i<=n+10; i+=2)
        cout << i << endl;

    return 0;
}
