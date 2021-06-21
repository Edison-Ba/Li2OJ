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

ll x[102], y[102], f[102][102];

int main()
{
    ll n;
    n = read();
    for (int i = 1; i <= n; ++i)
    {
        x[i] = read();
        y[i] = read();
        //f[i][i]=42323423432;
    }

    for (int l = 1; l <= n; ++l)
    {
        for (int i = 1; i + l <= n + 1; ++i)
        {
            ll j = i + l - 1;
            if (i != j)
                f[i][j] = 0x7fffffff;
            for (int k = i; k < j; ++k)
            {
                f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + x[i] * y[k] * y[j]);
            }
        }
    }
    printf("%lld\n", f[1][n]);
    return 0;
}