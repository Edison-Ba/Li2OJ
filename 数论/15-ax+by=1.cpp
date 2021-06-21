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


ll a,b,x,y,d;

void ex(ll a,ll b,ll &x,ll &y)
{
    if(b==0)
    {
        x=1,y=0,d=a;
        return;
    }
    ex(b,a%b,y,x);
    y-=x*(a/b);
}
int main()
{
    a=read();
    b=read();
    ex(a,b,x,y);
//     for(int x=-100;x<=100;++x)
//     for(int y=-100;y<=100;++y)
//     if(x*a+y*b==1)
//     {
// printf("%d %d\n",x,y);
// return 0;
//     }
    if(d!=1)
    {
        puts("sorry");
        return 0;
    }
    if(x<0)
    {
        for(int i=0;;i++)
        {
            x+=b,y-=a;
            if(x>0) break;
        }
    }
    else
    {
        for(int i=0;;i++)
        {
            x-=b,y+=a;
            if(x<0) break;
        }
        x+=b,y-=a;
    }
    printf("%lld %lld\n",x,y);
    Edison Ba;
}
