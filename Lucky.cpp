
#include <bits/stdc++.h>
using namespace std;

/*

https://codeforces.com/problemset/problem/1676/A

Status - UnSubmitted  

*/

int main() {
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int sum1=0, sum2=0;
        for(int i=0; i<str.size(); i++){
            if(i<(str.size()/2)){
                sum1 = sum1 + str[i];
            }
            else if (i>=(str.size()/2))
                sum2 = sum2 + str[i];
        }
        if(sum1 == sum2)    cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
}