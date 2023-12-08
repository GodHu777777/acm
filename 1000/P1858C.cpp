#include<bits/stdc++.h>
#define long long ll
#define MAXN 1000010
#define cy puts("YES")
#define cn puts("NO")
#define cnl puts("")
#define DEBUG_(t) cout << t << "$$$$" << endl
#define mset(a) memset(a, 0, sizeof(a))
using namespace std;

bool vis[MAXN];
bool gcd[MAXN];

void solve()
{
    int n;
    cin >> n;
    cout << "1 ";
    vis[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        if(vis[i]) continue;

        int t = i;
        int fac = 1;
        
        while(t * fac <= n)
        {
            cout << t * fac << " ";
            vis[t*fac] = 1;
            fac *= 2;
        }
    }
    cnl;
    mset(vis);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) 
    {
        solve();
    }

    return 0;
}