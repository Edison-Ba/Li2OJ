/*---------------------------------
 *Title number: L2OJ 
 *Creation date: 2021.2.25
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

const int NMP = 102;
ll ans, f[NMP][NMP];
int  a[NMP], b[NMP];

int main()
{
    ll n, m;
    n = read();
    m = read();
    for (int i = 1; i <= n; ++i)
        // a[i] = read();
        cin>>a[i];
    for (int i = 1; i <= m; ++i)
        // b[i] = read();
        cin>>b[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i] == b[j])
                f[i][j] = f[i - 1][j - 1] + 1;
            else
                f[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (ans < f[i][j])
                ans = f[i][j];
        }
    }

    printf("%lld\n", ans);
    return 0;
}