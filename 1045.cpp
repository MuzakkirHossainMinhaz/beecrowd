/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double arr[3];
    for(int i=0; i<3; i++)
        cin >> arr[i];

    sort(arr, arr+3);

    if(arr[2]>=arr[1]+arr[0])
        cout << "NAO FORMA TRIANGULO" << endl;
    else if(arr[2]*arr[2]==arr[1]*arr[1]+arr[0]*arr[0])
        cout << "TRIANGULO RETANGULO" << endl;
    else if(arr[2]*arr[2]>arr[1]*arr[1]+arr[0]*arr[0])
        cout << "TRIANGULO OBTUSANGULO" << endl;
    else if(arr[2]*arr[2]<arr[1]*arr[1]+arr[0]*arr[0])
        cout << "TRIANGULO ACUTANGULO" << endl;

    if(arr[0]==arr[1] && arr[1]==arr[2])
        cout << "TRIANGULO EQUILATERO" << endl;
    else if(arr[0]==arr[1] || arr[0]==arr[2] || arr[1]==arr[2])
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}

