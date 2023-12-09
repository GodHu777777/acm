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
    int a,b,c;
    cin >> a >> b >> c;
    int s1 = a, s2 = b;
    if(c % 2 == 1) 
    {
        s1 += c / 2 + 1;
        s2 += c - (c / 2 + 1);
    }else 
    {
        s1 += c / 2;
        s2 += c - (c / 2);
    }
    if(s1 > s2) cout << "First\n";
    else cout << "Second\n";
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