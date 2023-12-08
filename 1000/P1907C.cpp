#include<bits/stdc++.h>
using namespace std;

int cnt[50];

void solve()
{
    memset(cnt, 0, sizeof(cnt));
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        cnt[ch - 'a'] ++;
    }

    int maxFreq = 0;

    for(int i = 0; i < 26; i++)
    {
        maxFreq = max(maxFreq, cnt[i]);
    }
    
    if(maxFreq > n / 2) cout << n - (n - maxFreq) * 2 << '\n';
    else cout << n % 2 << '\n';
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