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


ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

ll ans;
int main()
{
    ll n=read();
    for(int i=1;i<=n;++i)
    {
        ll a=read();
        if(i==1) ans=a;
        else
        {
            ans=gcd(ans,a);
        }
    }
    cout<<ans<<endl;
    Edison Ba;
}
