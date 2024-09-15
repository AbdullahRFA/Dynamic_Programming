#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int ara[N],dp[N];
int lis(int i)
{
//    if(i==0)return -100000;
    if(dp[i]!=-1)return dp[i];
    int ans=1;
    for(int j=0;j<i;j++)
    {
        if(ara[i]>ara[j])
            ans=max(ans,lis(j)+1);
    }
   // cout<<ans<<endl;
    return dp[i]=ans;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>ara[i];
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,lis(i));
    }
    cout<<ans<<endl;
}
