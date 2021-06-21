#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;

inline ll read()
{
    ll x=0,f=0;
    char ch=getchar();
    while(!isdigit(ch)) f|=(ch=='-'),ch=getchar();
    while(isdigit(ch)) x=(x<<1)+(x<<3)+(ch^=48),ch=getchar();
    return f?-x:x;
}

ll ksm(ll a,ll n)
{
    if(a==1 || n==0) return 1;
    ll m=a,ans=1;
    while(n>0)
    {
        if(n&1)
        {
            ans*=m;
        }
        m*=m;
        n>>=1;
    }
    return ans;
}
int main()
{
    ll n,m;
    n=read();
    m=read();
    ll ans=ksm(n,m);
    printf("%lld\n",ans);
    return 0;
}