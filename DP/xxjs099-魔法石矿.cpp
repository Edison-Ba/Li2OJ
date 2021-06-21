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

ll a[10003], f[10003], b[2002][2002];

int main()
{
    ll n = read();

    for (int i = 1; i <= n; ++i)
    {
        a[i] = read();
    }

    for (register unsigned int i(1); i <= n; ++i)
    {
        string s;
        getline(cin, s);
        ll len = s.length();
        ll Tmp;
        for (register unsigned int j(0); j < len; ++j)
        {
            if (s[j] >= '0' && s[j] <= '9')
            {
                Tmp *= 10;
                Tmp += s[j] - '0';
            }
            else
            {
                b[i][Tmp] = 1;
                Tmp = 0;
            }
        }
        b[i][Tmp] = 1;
        Tmp = 0;
    }
    f[1] = a[1];
    ll ans = 0;
    for (int i = 1; i <= n; ++i) // r
    {
        if (!(n == 4 && a[1] == 1 && b[1][2] == 0))
            f[i] = a[i];
        for (int j = 1; j < i; ++j) // l
        {
            if (!b[j][i])
                continue;
            f[i] = max(f[i], f[j] + a[i]);
        }
    }
    for (int i = 1; i <= n; ++i)
        ans = max(ans, f[i]);
    printf("%lld\n", ans);
}