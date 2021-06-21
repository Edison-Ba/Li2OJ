/*---------------------------------
 *Title number: L2OJ 
 *Creation date: 2021.3
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
    ll x = 0, f = 0;
    char ch = getchar();
    while (!isdigit(ch))
        f |= (ch == '-'), ch = getchar();
    while (isdigit(ch))
        x = (x << 1) + (x << 3) + (ch ^= 48), ch = getchar();
    return f ? -x : x;
}

ll a[1000002],n,ans,maxn;

int main()
{
    n=read();
    for(int i=1;i<=n;++i)
    {
        ll x=read();
        ll y=read();
        ++a[x];
        --a[y+1];
        maxn=max(maxn,y+1);
    }
    for(int i=1;i<maxn;++i)
    {
        a[i]=a[i-1]+a[i];
        ans=max(ans,a[i]);
    }
    printf("%lld\n",ans);
    Edison Ba;
}