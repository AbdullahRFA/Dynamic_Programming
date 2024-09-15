#include<bits/stdc++.h>
#define   ll    long long int
const   ll N = 1e7;
ll ara[N];              ///Bottom_Up Approch
using namespace std;
int main()
{
    ll n;
    while(cin>>n){
            ara[0]=0;
    ara[1]=1;
    for(int i=2;i<n;i++)
    {
        ara[i]=ara[i-1]+ara[i-2];
    }
    cout<<ara[n-1]<<endl;
    }
}
