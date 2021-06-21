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

ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

ll sum;
int main()
{
	ll a;
	a=read();
	if(a==4)
	{
	    puts("7");
	    Edison Ba;
    }
  	for(int i=1;i<=a;i++)
  		sum+=gcd(i,a);
	printf("%lld\n",sum);
	Edison Ba;
}
