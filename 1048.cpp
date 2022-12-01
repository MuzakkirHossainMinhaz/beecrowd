/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double salary;
    cin >> salary;

    int percentage=0;
    double new_salary=salary;
    if(salary<=400.00)
    {
        percentage = 15;
        new_salary += (salary/100.0)*percentage;
    }
    else if(salary<=800.00)
    {
        percentage = 12;
        new_salary += (salary/100.0)*percentage;
    }
    else if(salary<=1200.00)
    {
        percentage = 10;
        new_salary += (salary/100.0)*percentage;
    }
    else if(salary<=2000.00)
    {
        percentage = 7;
        new_salary += (salary/100.0)*percentage;
    }
    else
    {
        percentage = 4;
        new_salary += (salary/100.0)*percentage;
    }

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << new_salary << endl;
    cout << "Reajuste ganho: " << new_salary-salary << endl;
    cout << "Em percentual: " << percentage << " %" << endl;

    return 0;
}

