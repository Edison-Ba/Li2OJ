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

ll ans,sum;

int main()
{
	ll n=read();
	for(int i=1;i<=n;i++)
	{
		if(!(n%i))
		{
			++ans;
			sum+=i;
		}
	}
	printf("%lld %lld\n",ans,sum);
    Edison Ba;
}

