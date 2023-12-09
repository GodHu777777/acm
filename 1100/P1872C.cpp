#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define cy puts("YES")
#define cn puts("NO")
#define cnl puts("")
#define DEBUG_(t) cout << t << "###DEBUG" << endl
#define mset(a) memset(a, 0, sizeof(a))
#define PII pair<int, int>
using namespace std;
const int MAXN = 100000 + 5;

//if x is prime, return 0
int notPrime(int x)
{
    for(int i = 2; i <= sqrt(x); i++)
    {
        if(x % i == 0) return i;
    }
    return 0;
}

void solve()
{
    int l, r;
    cin >> l >> r;
    for(int i = l; i <= r; i++)
    {
        if(notPrime(i))
        {
            cout << notPrime(i) << " " << i - notPrime(i) << '\n';
            return ;
        }
    }
    cout << "-1" << "\n";
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