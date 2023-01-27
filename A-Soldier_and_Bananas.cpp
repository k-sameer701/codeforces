
#include <bits/stdc++.h>
using namespace std;

/*

https://codeforces.com/problemset/problem/546/A

Status - UnSubmitted

*/

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int sum = 0;
    for(int i=1; i<=w; i++){
        sum = sum + k*i;
    }

    int ans = sum - n;
    if(ans>0)
        cout << ans << endl;
    else    
        cout << "0" << endl;

}
