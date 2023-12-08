#include<bits/stdc++.h>
#define long long ll
#define MAXN 1000010
#define cy puts("YES")
#define cn puts("NO")


using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == s2[i] && s1[i] == '0')
        {
            if(s1[i + 1] == s2[i + 1] && s1[i + 1] == '1')
            {
                cy;
                return;
            }
        }
    }
    
    cn;
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