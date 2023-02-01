
#include <bits/stdc++.h>
using namespace std;

/*

https://codeforces.com/problemset/problem/734/A

Status - Submitted

*/

int main()
{
    int num;
    cin >> num;

    string str;
    cin >> str;
    
    int count1 = 0, count2 = 0;

    for (int i = 0; i < num; i++)
    {
        if (str[i] == 'A')
            count1++;
        else if (str[i] == 'D')
            count2++;
    }
    if (count1 > count2)
        cout << "Anton" << endl;
    else if (count2 > count1)
        cout << "Danik" << endl;
    else if (count2 == count1)
        cout << "Friendship" << endl;

    return 0;
}
