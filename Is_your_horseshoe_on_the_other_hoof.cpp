
#include <bits/stdc++.h>
using namespace std;

/*
https://codeforces.com/problemset/problem/228/A

Status - Submitted

*/

int main()
{
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    vector<int> v;
    v.push_back(n1);
    v.push_back(n2);
    v.push_back(n3);
    v.push_back(n4);

    sort(v.begin(), v.end());
    int count = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] == v[i+1])  count++;
    }
    cout << count << endl;
}
