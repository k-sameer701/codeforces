
#include <bits/stdc++.h>
using namespace std;

/*

https://codeforces.com/problemset/problem/1352/A

Status - UnSubmitted  - NOT COMPLETED


*/

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n; 
        string str = to_string(n);
        vector<string> new_String;
        int count = 0;
        string x;
        for(int i=0; i<str.size(); i++){
            if(str[i] != '0'){
                count++;
                x = str[i] + (int)pow(10, str.size()-1-i);
                new_String.push_back(x);
            }
        }
        cout << count << endl;
        for(int i=0; i<new_String.size(); i++){
            cout << new_String[i] << " ";
        }

    }
}
