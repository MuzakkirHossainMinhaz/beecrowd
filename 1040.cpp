/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << fixed << setprecision(1);
    double avg = (a*2 + b*3 + c*4 + d*1)/ 10;
    cout << "Media: " << avg << endl;

    if(avg>=7.0)
        cout << "Aluno aprovado." << endl;
    else if(avg<5.0)
        cout << "Aluno reprovado." << endl;
    else
    {
        cout << "Aluno em exame." << endl;

        double e;
        cin >> e;
        cout << "Nota do exame: " << e << endl;

        double new_avg = (avg + e) / 2;

        if(new_avg>=5.0)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;

        cout << "Media final: " << new_avg << endl;
    }

    return 0;
}
