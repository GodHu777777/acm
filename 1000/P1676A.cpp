#include<bits/stdc++.h>
using namespace std;

bool flag[1000100];

void solve()
{
    string s;
    cin >> s;
    int s1 = 0, s2 = 0;
    for(int i = 0; i < 3; i++)
    {
        s1 += s[i] - '0';
    }

    for(int i = 3; i < 6; i++)
    {
        s2 += s[i] - '0';
    }
    if(s1 == s2) puts("YES");
    else puts("NO");
}

int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}