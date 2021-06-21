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
    memset(v,0,sizeof(v));//��ձ������
    m=0;//��������
    for(int i=2;i<=n;i++)
    {
        if(!v[i])//δ����ǣ�iΪ����
            v[i]=i,    prime[++m]=i; //��¼
        for(int j=1;j<=m;j++)
        {
            if(prime[j]>v[i]||prime[j]>n/i) break;//i�и�С�������ӣ����߳���n�ķ�Χ
            v[i*prime[j]]=prime[j];//prime[j]Ϊ���� i*prime[j]����С������
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
