/*---------------------------------
 *Title number: ybt-dp 
 *Creation date: 2021.2.19
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

const int maxn = 20003;

ll n,a[maxn],w[maxn],f[maxn],m;

int main()
{
    m=read();
    n=read();
    for(int i=1;i<=n;++i)
        w[i]=read();
    for(int i=1;i<=n;++i)
        for(int j=m;j>=w[i];--j)
        {
            f[j]=max(f[j],f[j-w[i]]+w[i]);
        }
    
    ll ans=m-f[m];
    printf("%lld\n",ans);
    return 0;
}