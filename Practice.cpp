#include <bits/stdc++.h>
using namespace std;


string check(char ch){
    string str = "codeforces";
    for(int i=0; i<str.size(); i++){
        if(ch == str[i])    return "YES";
    }
    return "NO";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char x;
        cin >> x;

        cout << check(x) << endl;
    }

    
}