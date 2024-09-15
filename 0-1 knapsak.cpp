#include<bits/stdc++.h>
using namespace std;
int ara[100],wt[100],check[100][100];
int knap(int n,int w)
{
    if(w==0||n<=0)return 0;
    if(check[n-1][w]!=-1)return check[n-1][w];
    if(wt[n-1]>w)
    {
        check[n-1][w]=knap(n-1,w);
        return check[n-1][w];
    }
    else
    {
        check[n-1][w]=max(knap(n-1,w-wt[n-1])+ara[n-1],knap(n-1,w));
        return check[n-1][w];
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<"Enter Weight : ";
    for(int i=0; i<n; i++)
    {
        cin>>wt[i];
    }
    cout<<"Enter values : ";
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    int cp;
    cout<<"Enter knapsak capacity: ";
    cin>>cp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=cp; j++)
        {
            check[i][j]=-1;
        }
    }
    cout<<knap(n,cp)<<endl;
}
