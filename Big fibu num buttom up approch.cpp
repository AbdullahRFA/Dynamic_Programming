#include<bits/stdc++.h>
using namespace std;
const int k =1e5;
int memois[k];

int main()
{
    memset(memois,-1,sizeof(memois));
    int n;
    cin>>n;         ///Buttom up approch
    memois[0]=0;
    memois[1]=1;
    for(int i=2;i<=n;i++)
    {
        memois[i]=memois[i-1]+memois[i-2];
    }
    cout<<memois[n]<<endl;
}


