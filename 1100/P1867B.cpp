#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define cy cout << "YES" << "\n" 
#define cn cout << "YES" << "\n" 
#define cnl cout << "\n"
#define DEBUG_(t) cout << t << "###DEBUG" << endl
#define mset(a) memset(a, 0, sizeof(a))
#define PII pair<int, int>
using namespace std;
const int MAXN = 100000 + 5;



void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    bool isPalin = 1;
    int sa = 0, dif = 0;
    for(int i = 0; i < n / 2; i++)
    {
        if(s[i] == s[n - i - 1])
        {
            sa++;
        }else 
        {
            dif++;
            isPalin = 0;
        }
    }
    if(n % 2 == 1)
    {
        for(int i = 0; i <= n; i++)
        {
            if(i < dif)
            {
                cout << "0";
            }else if(i <= sa * 2 + dif + 1)
            {
                cout << "1";
            }else cout << "0";
        }
        cnl;
    }else 
    {
        for(int i = 0; i <= n; i++)
        {
            if(i < dif)
            {
                cout << "0";
            }else if(i <= sa * 2 + dif)
            {
                if((i - dif) % 2 == 0)
                {
                    cout << "1";
                }else cout << "0";
                
            }else cout << "0";
        }
        cnl;
    }
}


signed main()	
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}