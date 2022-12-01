/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;
    double salary, productSold;
    cin >> salary >> productSold;

    double totalSalary = salary + (productSold*0.15);

    printf("TOTAL = R$ ");
    cout << fixed << setprecision(2) << totalSalary << endl;

    return 0;
}
