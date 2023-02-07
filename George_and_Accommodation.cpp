
#include <bits/stdc++.h>
using namespace std;

/*

https://codeforces.com/problemset/problem/467/A

Status - Submitted

*/

int main()
{
    int t, count=0;
    cin >> t;
    while(t--){
        int people, capacity;
        cin >> people >> capacity;

        int left = capacity - people;
        if(left>=2){
            count++;
        }
    }
    cout << count << endl;
}
