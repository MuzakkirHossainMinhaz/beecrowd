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

    int arr[n] = {0, 1};

    for(int i=2; i<n; i++)
        arr[i] = arr[i-1]+arr[i-2];

    cout << arr[0];
    for(int i=1; i<n; i++)
        cout << " " << arr[i];
    cout << endl;

    return 0;
}
