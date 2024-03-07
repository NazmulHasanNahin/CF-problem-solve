#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(2, 0);
        for (int i = 0; i < 5; i++)
        {
            char x;
            cin >> x;
            if(x=='A')
            {
                v[0]++;
            }
            else if(x=='B')
            {
                v[1]++;
            }
        }
        if(v[0]>v[1])
        {
            cout<<"A\n";
        }
        else if(v[0]<v[1])
        {
            cout<<"B\n";
        }
    }
    return 0;
}
// https://codeforces.com/contest/1926/problem/A