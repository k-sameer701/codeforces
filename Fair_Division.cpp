
#include <bits/stdc++.h>
using namespace std;

/*

https://codeforces.com/problemset/problem/1472/B

Status - Submitted

*/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        long long count_1 = 0, count_2 = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.emplace_back(x);
            sum = sum + v[i];
            if (v[i] == 1)
                count_1 = count_1 + 1;
            else if (v[i] == 2)
                count_2 = count_2 + 1;
        }
        if ((sum % 2 == 0) && ((count_1 == count_2) || (count_1 == 0 && count_2 % 2 == 0) || (count_2 == 0 && count_1 % 2 == 0) || (n%2==0))){
            cout << "YES" << endl;
        }
        else 
            cout << "NO" << endl;
        }
}