/*---------------------------------
 *Title number: 数论-23 
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

struct great
{
    inline bool operator () (int a,int b){
        return a>b;
    }
};
priority_queue<ll,vector<ll>,great> q;
ll n,m;

int main()
{
    n=read();
    m=read();
    for(int i=1;i<=n;i++)
    {
        ll num=read();
        q.push(num);
    }
    ll ans=0,t=(n-1)%(m-1)+1;

    if(t>1)
    {
        for(int i=1;i<=t;i++)
        {
            ans+=q.top();
            q.pop();
        }
        q.push(ans);
    }
    while(q.size()>=m)
    {
        ll sum=0;
        for(int i=1;i<=m;i++)
        {
            sum+=q.top();
            q.pop();
        }
        q.push(sum);
        ans+=sum;
    }
    printf("%lld\n",ans);
    return 0;
}