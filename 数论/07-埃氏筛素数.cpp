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

const ll maxn=500050;
ll v[maxn],prime[maxn],n,k,t,m;
void primes(int n)
{
    memset(v,0,sizeof(v));//清空标记数组
    m=0;//质数个数
    for(int i=2;i<=n;i++)
    {
        if(!v[i])//未被标记，i为质数
            v[i]=i,    prime[++m]=i; //记录
        for(int j=1;j<=m;j++)
        {
            if(prime[j]>v[i]||prime[j]>n/i) break;//i有更小的质因子，或者超出n的范围
            v[i*prime[j]]=prime[j];//prime[j]为合数 i*prime[j]的最小质因子
        }
    }
}

int main()
{
	n=read();
	primes(n);
	for(int i=1;i<=m;++i)
	printf("%lld ",prime[i]);
	return 0;
}
