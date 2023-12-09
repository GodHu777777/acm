#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
#define ll long long
#define cy puts("YES")
#define cn puts("NO")
#define cnl puts("")
#define DEBUG_(t) cout << t << "###DEBUG" << endl
#define mset(a) memset(a, 0, sizeof(a))
#define PII pair<int, int>
using namespace std;
const int MAXN = 100000 + 5;

int a[20];

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    a[0] += 1;
    ll ans = 1;
    for(int i = 0; i < n; i++) ans *= a[i];
    cout << ans << '\n';
}


int main()	
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}