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

ll prime[10003],m;

void work(ll num)
{
    ll i=2;
    while(num>=i)
    {  
        if(!(num%i))
        {
       	    prime[m]=i;
       	    ++m;
       	    num=num/i;
       	    i=2;
	    }
   	    else ++i;   
    }
}

int main()
{
	ll n;
	n=read();
	work(n);
	for(int i=0;i<m;i++)
	   printf("%lld ",prime[i]);
	Edison Ba;
}

