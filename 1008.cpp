/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numbers, worked_hours;
    float amount_per_hours;

    cin >> numbers >> worked_hours >> amount_per_hours;

    printf("NUMBER = %d\n", numbers);
    printf("SALARY = U$ %.2f\n", worked_hours*amount_per_hours);

    return 0;
}
