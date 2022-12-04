/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int x = min(a, b), y = max(a, b);

    for(int i=x+1; i<y; i++)
    {
        if(i%5==2 || i%5==3)
            cout << i << endl;
    }

    return 0;
}

