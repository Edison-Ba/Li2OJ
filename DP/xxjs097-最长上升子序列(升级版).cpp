/*---------------------------------
 *Title number: L2OJ 
 *Creation date: 2021.2.23
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

int a[100002], f[100002], b[100002], ans[100002], tot = 0;

int main()
{
    ll n = read();
    for (int i = 1; i <= n; ++i)
    {
        a[i] = read();
        // f[i]=a[i];
    }
    f[1] = 1;
    b[1] = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j < i; ++j)
        {
            if (a[j] < a[i])
            {
                if (f[i] < f[j] + 1)
                {
                    f[i] = f[j] + 1;
                    b[i] = j;
                }
            }
        }
    }
    // for(int i=1;i<=n;++i)
    // printf("%d ",b[i]);

    int maxn = 0, d = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (maxn < f[i])
        {
            maxn = f[i];
            d = i;
        }
        maxn = max(maxn, f[i]);
    }
    printf("%d\n", maxn);
    while (1)
    {
        if (b[d] == 0)
        {
            ans[++tot] = a[d];
            //printf("%d\n",a[d]);
            break;
        }
        ans[++tot] = a[d];
        //printf("%d\n",a[d]);
        d = b[d];
    }
    for (int i = tot; i >= 1; --i)
        printf("%d ", ans[i]);
    return 0;
}