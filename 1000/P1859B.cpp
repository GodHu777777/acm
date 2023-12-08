#include<bits/stdc++.h>
#define ll long long
#define MAXN 1000000010
#define cy puts("YES")
#define cn puts("NO")
#define DEBUG_(t) cout << t << "$$$$" << endl
using namespace std;

int a[100010][2];


void solve()
{
    int n;
    cin >> n;
    

    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        vector<int> arr;
        for(int i = 0; i < t; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());
        // DEBUG_(arr[0]);
        // DEBUG_(arr[1]);
        a[i][0] = arr[0];
        a[i][1] = arr[1];
    }
    int min0 = MAXN;
    int min1 = MAXN, minIndex = -1;
    for(int i = 0; i < n; i++)
    {
        if(a[i][0] < min0)
        {
            min0 = a[i][0];
        }
        if(a[i][1] < min1)
        {
            min1 = a[i][1];
            minIndex = i;
        }
    }

    ll ans = min0;
    for(int i = 0; i < n; i++)
    {
        if(i == minIndex) continue;
        ans += a[i][1];
    }

    cout << ans << "\n";

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