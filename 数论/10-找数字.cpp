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

ll prime[10000003],m,n,k;

ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

void print()
{
    ll ans=(k-1)/m*n;
    ans+=prime[(k-1)%m+1];
    printf("%lld\n",ans);
}

int main()
{
    n=read();
    k=read();
    for(int i=1;i<n;++i)
    {
        if(gcd(i,n)==1)
        prime[++m]=i;

    }
    print();
    Edison Ba;
}
