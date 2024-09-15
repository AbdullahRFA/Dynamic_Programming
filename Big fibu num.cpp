#include<bits/stdc++.h>
using namespace std;
const int k =1e5;
int memois[k];
int fib(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;       ///Top down approch
    if(memois[n]!=-1) return memois[n];
    return memois[n]=fib(n-1)+fib(n-2);
}
int main()
{
    memset(memois,-1,sizeof(memois));
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}

