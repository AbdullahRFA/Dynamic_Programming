#include<bits/stdc++.h>
#define   ll    long long int
const   ll N = 1e7;
ll ara[N];              ///Top-Down Approch
ll fib(ll n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(ara[n]!=-1)return ara[n];
    return ara[n]=fib(n-1)+fib(n-2);
}
using namespace std;
int main()
{
    memset(ara,-1,sizeof(ara));

    ll n;
    while(cin>>n){

    cout<<fib(n)<<endl;
    }
}
