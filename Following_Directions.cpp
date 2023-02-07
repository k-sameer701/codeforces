#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        int count1 = 0, count2 = 0;
        for(int i=0; i<n; i++){
            if(str[i]=='U'){
                count1++;
            }
            else if(str[i] == 'R'){
                count2++;
            }
            else if(str[i] == 'L'){
                count2--;
            }
            else if(str[i] == 'D'){
                count1--;
            }
            if(count1 == 1 && count2 == 1){
                cout << "YES" << endl;
                break;
            }
        }
        if(count1 != count2)    cout << "NO" << endl;

    }

    
}