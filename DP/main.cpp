#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll freq[100001];
ll dp[100001];

int main()
{
    ll n; cin>>n;
    for(int i=0;i<n;i++){
        ll t; cin>>t; freq[t]++;
    }
    //0 is not used
    //1 is used
    for(ll i=1;i<=100000;i++){
        dp[i]=max(dp[i-1],dp[i-2]+freq[i]*i);
    }
    cout<<dp[100000];
    return 0;
}
