#include<bits/stdc++.h>
using namespace std;

bool flag[1000100];

void solve()
{
    stack<int> stkLower;
    stack<int> stkUpper;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'b')
        {
            if(!stkLower.empty()) stkLower.pop();
        }else if(s[i] == 'B')
        {
            if(!stkUpper.empty()) stkUpper.pop();
        }
        else if(s[i] >= 'a' && s[i] <= 'z') stkLower.push(i);
        else stkUpper.push(i);
    }
    while(!stkLower.empty())
    {
        flag[stkLower.top()] = 1;
        stkLower.pop();   
    }
    while(!stkUpper.empty())
    {
        flag[stkUpper.top()] = 1;
        stkUpper.pop();
    }

    for(int i = 0; i < s.size(); i++)
    { 
        if(flag[i]) cout << s[i];
    }
    puts("");
    memset(flag, 0, sizeof(flag));
}

int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}