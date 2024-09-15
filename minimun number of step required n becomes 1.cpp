#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
const ll N=2*1e7+10;
int dp[N];
ll solve(ll n)
{
    if(dp[n]!=-1)return dp[n];
    if(n==1)return 0;
    ll ans=INT_MAX;
    if(n%3==0)
    {
        ans=min(ans,solve(n/3)+1);
    }
    if(n%2==0)
    {
        ans=min(ans,solve(n/2)+1);
    }
    ans=min(ans,solve(n-1)+1);
    return dp[n]=ans;
}
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        ll n;
        cin>>n;
        cout<<"Case "<<i<<": "<<solve(n)<<"\n";
    }
}
