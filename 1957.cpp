/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int v;
    cin >> v;

    stringstream ss;
    ss << hex << v;
    string result = ss.str();

    transform(result.begin(), result.end(), result.begin(), ::toupper);

    cout << result << endl;

    return 0;
}
