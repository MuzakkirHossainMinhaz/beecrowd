/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int day1, day2, hour1, hour2, minute1, minute2, second1, second2;

    cin >> str >> day1;
    scanf("%d : %d : %d", &hour1, &minute1, &second1);
    cin >> str >> day2;
    scanf("%d : %d : %d", &hour2, &minute2, &second2);

    int day = day2 - day1;
    int hour = hour2 - hour1;
    int minute = minute2 - minute1;
    int second = second2 - second1;


    if(second<0)
    {
        second += 60;
        minute--;
    }
    if(minute<0)
    {
        minute += 60;
        hour--;
    }
    if(hour<0)
    {
        hour += 24;
        day--;
    }

    cout << day << " dia(s)" << endl;
    cout << hour << " hora(s)" << endl;
    cout << minute << " minuto(s)" << endl;
    cout << second << " segundo(s)" << endl;

    return 0;
}

