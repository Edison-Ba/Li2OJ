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

const int NMP = 1003;

double ans;
ll f[NMP][NMP], m, n, k;
bool vis[NMP][NMP];

int main()
{
    n = read();
    m = read();
    k = read();
    memset(vis, 0, sizeof(vis));
    for (int i = 1; i <= k; ++i)
    {
        ll x, y;
        x = read();
        y = read();
        vis[x][y] = 1;
    }
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            if (vis[i][j])
            {
                f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
            }
        }
    }
    ans = ((n + m - (f[n][m] << 1)) + f[n][m] * sqrt(2)) * 100;
    printf("%.lf\n", ans);

    return 0;
}
