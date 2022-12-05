/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;

    while(n<=0)
        cin >> n;

    int result = 0;
    for(int i=0; i<n; i++)
    {
        result += a++;
    }

    cout << result << endl;

    return 0;
}
