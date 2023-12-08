#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n, d;
    cin >> n >> d;
    if(n >= d)
    {
        puts("YES");
        return;
    }

    int ans = d;

    for(int i = max(0, (int)(sqrt(d)) - 10); i <= min(n, (int)(sqrt(d)) + 10); i++)
    {
        int t;
        if(d % (i + 1) == 0) t = i + d / (i + 1);
        else t = i + 1 + d / (i + 1);

        ans = min(t, ans);        
    }
    if(n >= ans)
    {
        puts("YES");
    }else puts("NO");
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}