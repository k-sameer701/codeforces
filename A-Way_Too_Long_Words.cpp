#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int size = str.size();
        if (size > 10)
            cout << str[0] << (size - 2) << str[size - 1] << endl;
        else
            cout << str << endl;
    }
    return 0;
}