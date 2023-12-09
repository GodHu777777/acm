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
#define PII pair<long long, long long>
using namespace std;
const int MAXN = 100000 + 5;

int n,k,a,b;


void solve()
{
    cin >> n >> k >> a >> b;
    a--;
    b--;
    vector<PII> v(n);
    for(auto& t : v) cin >> t.first >> t.second;
    if(a < k && b < k) 
    {
        cout << "0\n";
        return;
    }
    int s1 = 4e9+10, s2 = 4e9+10;
    for(int i = 0; i < k; i++)
    {
        int d = 0;
        d += abs(v[i].first - v[a].first);
        d += abs(v[i].second - v[a].second);
        s1 = min(d, s1);
    }
    for(int i = 0; i < k; i++)
    {
        int d = 0;
        d += abs(v[i].first - v[b].first);
        d += abs(v[i].second - v[b].second);
        s2 = min(d, s2);
    }

    int dab = 0;
    dab += abs(v[a].first - v[b].first);
    dab += abs(v[a].second - v[b].second);
    if(a < k)
    {
        cout << s2 << "\n";
        return;
    }
    if(b < k)
    {
        cout << s1 << "\n";
        return;
    }
    
    cout << min(dab, s1 + s2) << "\n";
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