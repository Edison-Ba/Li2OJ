#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
#include<cstdlib>
#include<algorithm>
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

ll ksm(ll a,ll n,ll mod)
{
	if(a==1 || n==0)
	{
		if(mod==1) return 0;
		return 1;
	}
	ll m=a,ans=1;
	while(n>0)
	{
		if(n&1)
		{
			ans*=m;
			ans%=mod;
		}
		m*=m;
		m%=mod;
		n>>=1;
	}
	return ans;
}

int main()
{
	ll a,mod,p;
	a=read();
	p=read();
	mod=read();
	ll ans=ksm(a,p,mod);
	printf("%lld\n",ans);
	return 0;
}
