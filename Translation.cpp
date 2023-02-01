
#include <bits/stdc++.h>
using namespace std;

/*

https://codeforces.com/problemset/problem/41/A

Status - UnSubmitted

*/

int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;

    string new_Str;

    for(int i=str2.size()-1; i>=0; i--){
        new_Str = new_Str + str2[i];
    }
    //cout << new_Str ;
    
    if(new_Str == str1)
        cout << "YES" << endl;
    else    
        cout << "NO" << endl;

    //return 0;
}
