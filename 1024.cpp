/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    bool flag = false;
    while(t--)
    {
        if(!flag)
        {
            getchar();
            flag = true;
        }
        string str;
        getline(cin, str);

        for(int i=0; i<str.size(); i++)
            if(isalpha(str[i]))
                str[i] = str[i]+3;

        reverse(str.begin(), str.end());

        int len = str.size();

        for(int i=len/2; i<len; i++)
            str[i] = str[i]-1;

        cout << str << endl;
    }


    return 0;
}
