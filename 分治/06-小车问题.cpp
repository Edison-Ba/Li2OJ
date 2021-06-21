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

double a,b,f,s;

int main()
{
    cin>>s>>a>>b;
    f=s/((b+a)/2+a);
    double ans=((b+a)/2*f)/b+f;
    printf("%.2lf\n",ans);
    Edison Ba;
}
