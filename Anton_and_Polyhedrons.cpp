
#include <bits/stdc++.h>
using namespace std;

/*

https://codeforces.com/problemset/problem/785/A

Status - UnSubmitted

*/

int main()
{
    int t, sum = 0;
    cin >> t;
    
    while (t--)
    {
        string str;
        cin >> str;
        if(str == "Tetrahedron")  sum = sum + 4;
        else if(str == "Octahedron")  sum = sum + 8;
        else if(str == "Cube")  sum = sum + 6;
        else if(str == "Dodecahedron")  sum = sum + 12;
        else if(str == "Icosahedron")  sum = sum + 20;
    }
    cout << sum << endl;
}
