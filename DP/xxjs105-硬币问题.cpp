/*---------------------------------
 *Title number: ybt-dp 
 *Creation date: 2021.2.19
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

const int maxn = 10003;
const int maxm = 100002;

ll n, w[maxn], f[maxm], c[maxn], m;

int main()
{
    while (cin >> n >> m)
    {

        if (n == 0 && m == 0)
            break;
        memset(f, 0, sizeof f);
        f[0] = 1;
        for (int i = 1; i <= n; ++i)
            w[i] = read();
        for (int i = 1; i <= n; ++i)
            c[i] = read();
        ll ans = 0;
        for (int mm = 1; mm <= m; ++mm)
        {
            memset(f, 0, sizeof f);
            f[0] = 1;
            for (int i = 1; i <= n; ++i)
            {
                for (int k = 1; k <= c[i]; ++k)
                {
                    for (int j = mm; j >= w[i]; --j)
                    {
                        f[j] += f[j - w[i]];
                    }
                }
            }
            //printf("%lld\n",f[mm]);
            if(f[mm]) ans++;
        }
        printf("%lld\n", ans);
    }
}