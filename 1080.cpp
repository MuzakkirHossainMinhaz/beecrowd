/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=100, maxValue=0, maxValueIndex=0;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

        if(maxValue<arr[i])
        {
            maxValue = arr[i];
            maxValueIndex = i;
        }
    }

    cout << maxValue << endl;
    cout << maxValueIndex+1 << endl;

    return 0;
}

