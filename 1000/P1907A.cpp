#include<bits/stdc++.h>
using namespace std;

void solve()
{
    char ch;
    int index;
    cin >> ch >> index;
    for(int i = 1; i <= 8; i++)
    {
        if(i == index) continue;
        cout << ch << i << '\n';
    }
    for(char i = 'a'; i <= 'h'; i++)
    {
        if(i == ch) continue;
        cout << i << index << '\n';
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}