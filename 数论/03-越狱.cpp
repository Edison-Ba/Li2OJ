#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<stack>
#include<cmath>
#include<queue>
#include<map>
#define Edison return
#define Ba 0
using namespace std;
typedef long long ll;

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
	ll a,mod,p,n,m;
	n=read();
	m=read();
	mod=100003;
	ll ans=ksm(m,n,mod)-m*ksm(m-1,n-1,mod);
	printf("%lld\n",ans);
	Edison Ba;
}



