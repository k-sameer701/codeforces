
#include <bits/stdc++.h>
using namespace std;

/*

https://codeforces.com/problemset/problem/1512/A

Status - UnSubmitted

*/

int main()
{
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        int arr[size];
        for(int i=0; i<size; i++){
            cin >> arr[i];
        }

        unordered_map <int, int> mpp;
        for(int i=1; i<=size-1; i++){
            mpp[arr[i]]++;
        }
        for(auto it:mpp){
            if(it.second == 1){
                cout << it.first << endl;
            }
        }
    }
}
