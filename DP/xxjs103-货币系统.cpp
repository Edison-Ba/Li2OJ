/*---------------------------------
 *Title number: ybt-dfs 
 *Creation date: 2021.2.21
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
ll a[27], f[1002];

int main()
{
    ll v, n;
    v = read();
    n = read();
    for (int i = 1; i <= v; ++i)
        a[i] = read();
    f[0] = 1;
    for (int i = 1; i <= v; ++i)
    {
        for (int j = a[i]; j <= n; ++j)
        {
            f[j] += f[j - a[i]];
        }
    }
    printf("%lld\n", f[n]);
    return 0;
}