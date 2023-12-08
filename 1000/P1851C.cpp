#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
#define long long ll
#define cy puts("YES")
#define cn puts("NO")
#define cnl puts("")
#define DEBUG_(t) cout << t << "###DEBUG" << endl
#define mset(a) memset(a, 0, sizeof(a))
using namespace std;
const int MAXN = 100000 + 5;

int a[200010];

void solve()
{
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    if(k == 1)
    {
        cy;
        return;
    }
    int strt = a[0], end = a[n - 1];
    int sum = 2;

    if(strt == end)
    {
        for(int i = 1; i < n - 1; i++)
        {
            if(a[i] == strt) sum++;
        }
        if(sum >= k) 
        {
            cy;
            return;
        }else 
        {
            cn;
            return;
        }
    }

    int s1 = n, s2 = 0;
    int sum1 = 1, sum2 = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i] == strt) sum1++;
        if(sum1 == k)
        {
            s1 = i;
            break;
        }   
    }   
    for(int i = n - 2; i > 0; i--)
    {
        if(a[i] == end) sum2++;
        if(sum2 == k)
        {
            s2 = i;
            break;
        }
    }
    if(s1 < s2) cy;
    else cn;
    mset(a);
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