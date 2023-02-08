
#include <bits/stdc++.h>
using namespace std;

/*

https://codeforces.com/problemset/problem/703/A

Status - Submitted

*/

int main()
{
    int t;
    cin >> t;
    int count1 = 0, count2 = 0;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            count1++;
        }
        else if (x < y)
        {
            count2++;
        }
        else
        {
            count1++;
            count2++;
        }
    }
    if (count1 < count2)
        cout << "Chris" << endl;
    else if (count1 > count2)
        cout << "Mishka" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}
