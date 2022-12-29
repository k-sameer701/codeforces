#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    string str1, str2;
    cin >> str1;
    
    cin >> str2;
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);

    int i = 0, j = 0;
    while (i < str1.size() && j < str2.size())
    {
        if (str1 == str2)
        {
            cout << "0" << endl;
            break;
        }
        else if (str1[i] == str2[j])
        {
            i++;
            j++;
        }
        else
        {
            if (str1[i] < str2[j])
            {
                cout << "-1" << endl;
                break;
            }
            else if (str1[i] > str2[j])
            {
                cout << "1" << endl;
                break;
            }
        }
    }
}
