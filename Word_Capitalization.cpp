
#include <bits/stdc++.h>
using namespace std;

/*

https://codeforces.com/problemset/problem/281/A

Status - Submitted

*/

int main()
{
    string str;
    cin >> str;

    char ch1 = str[0];
    char ch2;
    string s;

    if (ch1 >= 'a' && ch1 <= 'z')
    {
        ch2 = ch1 - 32;
        s = s + ch2;
        for (int i = 1; i < str.size(); i++)
        {
            s = s + str[i];
        }

        cout << s;
    }
    else if (ch1 >= 'A' && ch1 <= 'Z')
    {
        cout << str;
    }
}
