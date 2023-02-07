
#include <bits/stdc++.h>
using namespace std;

/*

https://codeforces.com/problemset/problem/1742/A

Status - Submitted  


*/

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int a1 = b+c, b1=a+c, c1=a+b;

        if(a1 == a) cout << "YES" << endl;
        else if(b1 == b) cout << "YES" << endl;
        else if(c1 == c) cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
    
}
