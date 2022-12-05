/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, temp=1;
    cin >> x >> y;

    for(int i=1; i<=y; i+=x)
    {
        for(int j=1; j<=x; j++)
        {
            cout << temp++;
            if(j!=x)
                cout << " ";
        }
        cout <<  endl;
    }

    return 0;
}
