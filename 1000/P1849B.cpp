#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
#define ll long long 
#define cy puts("YES")
#define cn puts("NO")
#define cnl cout << "\n"
#define DEBUG_(t) cout << "\n" << t << "###DEBUG" << "\n"
#define PII pair<int, int>
#define mset(a) memset(a, 0, sizeof(a))
using namespace std;
const int MAXN = 100000 + 5;

int a[300010];
struct ComparePairs {
    bool operator()(const std::pair<int, int>& left, const std::pair<int, int>& right) const {
        if (left.first != right.first) {
            return left.first < right.first; 
        } else {
            return left.second > right.second; 
        }
    }
};




void solve()
{
    priority_queue<PII, vector<PII>, ComparePairs> pq;
    ll n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] %= k;
        if(a[i] == 0) 
        {
            cout << i + 1 << " ";
            continue;
        }
        pq.push(make_pair(a[i], i + 1));
    }
    while(!pq.empty())
    {
        //DEBUG_(pq.top().first);
        //DEBUG_(pq.top().second);
        //cout << pq.top().first << " $$ " << pq.top().second;
        //cnl; 
        cout << pq.top().second << " ";
        pq.pop();
    }
    cnl;
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