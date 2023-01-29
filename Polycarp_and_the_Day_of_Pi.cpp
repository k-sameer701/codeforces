#include <bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/contest/1790/problem/A

Status - Submitted

*/

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string str = "314159265358979323846264338327";
        int count = 0;
        
        for(int i=0, j=0; i<s.size(); i++, j++){
            if(s[i] == str[j])
                count++;
            else if(s[i] != str[j])
                break;
        }
        cout << count << endl;
    }
    
}
