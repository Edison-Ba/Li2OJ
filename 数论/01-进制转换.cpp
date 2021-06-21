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

stack<ll> q;
ll n;
void work(ll n)
{
	while(n>0)
    {
		q.push(n%2);
		n>>=1;
	}
	while(!q.empty())
    {
		printf("%lld",q.top());
		q.pop();
	}
	return;
}
int main()
{
	n=read();
	work(n);
	Edison Ba;
}

