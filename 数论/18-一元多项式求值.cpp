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

const int maxn=100005;
ll n,a[maxn],b[maxn],ans[maxn];
int main()
{
    n=read();
    for(int i=1;i<=n;i++)
        a[i]=read();
    for(int i=1;i<=n;i++)
        b[i]=read();
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            ans[i*j]+=a[i]*b[j];
        }
    }
    for(int i=1;i<=n*n;i++)
    {
        if(ans[i]==0 )continue;
        printf("%lld ",ans[i]);
    }
    puts("");
    Edison Ba;
}
