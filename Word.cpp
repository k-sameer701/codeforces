
#include <bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/problemset/problem/59/A

Status - UnSubmitted

*/

int main()
{
    string s;
    cin >> s;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            cnt1++;

        else if (s[i] >= 'A' && s[i] <= 'Z')
            cnt2++;
    }
    if (cnt1 >= cnt2)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else if (cnt1 < cnt2)
        transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;
}
