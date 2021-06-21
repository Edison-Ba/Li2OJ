/*---------------------------------
 *Title number: 数论-22 
 *Creation date: 2021.4
 *Author: EdisonBa 
 *-------------------------------*/
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <stack>
#include <cmath>
#include <queue>
#include <map>
#define Ba 0
#define Edison return
#define rint register int
#define ull unsigned long long
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

ll a[1000001],b[1000001],sum,n,m,mod;
bool p[1000001];

ll count(ll n,ll prime)
{
	ll zs=0;
	while(n){
		zs+=n/prime;
		n/=prime;
	}
	return zs;
}

ll fastm(ll a,ll b,ll m)
{
	ll fac=1;a=a%m;
	while(b)
    {
		if(b&1) fac=fac*a%m;
		a=a*a%m;
		b>>=1;
	}
	return fac;
}

void pri()
{
	for(int i=2;i*i<=1000001;i++){
		if(p[i]) continue;
		for(int j=i*i;j<1000001;j+=i) p[j]=1;
	}
}

int main()
{
	pri();
	for(int i=2;i<1000001;i++)
    {
		if(!p[i]) a[sum++]=i;
	}
	n=read();
    m=read();
    mod=read();
	ll ans=1;
	for(int i=0;i<sum && a[i]<=n;i++)
    {
		ll cnt=count(n,a[i])-count(m,a[i])-count(n-m,a[i]);
		if(cnt<0) 
            puts("impossiple!");
		ans=ans*fastm(a[i],cnt,mod)%mod;
		if(ans==0) 
            break;
	}
	printf("%lld\n",ans);
	Edison Ba;
}