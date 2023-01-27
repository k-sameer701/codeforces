
#include <bits/stdc++.h>
using namespace std;

/*

https://codeforces.com/problemset/problem/1030/A

Status - Submitted

*/
string check(int arr[], int n){
    for(int i=0;i<n; i++){
        if(arr[i] != 0)
            return "HARD";
    }
    return "EASY";
}
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for(int i=0; i<t; i++){
        cin >> arr[i];
    }
    cout << check(arr, t) << endl;
}
