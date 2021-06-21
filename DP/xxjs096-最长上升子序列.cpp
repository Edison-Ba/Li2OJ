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

int a[100002], f[100002];

int main()
{
    ll n = read();
    for (int i = 1; i <= n; ++i)
    {
        a[i] = read();
        // f[i]=a[i];
    }
    f[1] = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j < i; ++j)
        {
            if (a[j] < a[i])
            {
                f[i] = max(f[i], f[j] + 1);
            }
        }
    }
    int maxn = 0;
    for (int i = 1; i <= n; ++i)
    {
        maxn = max(maxn, f[i]);
    }
    printf("%d\n", maxn);
    return 0;
}