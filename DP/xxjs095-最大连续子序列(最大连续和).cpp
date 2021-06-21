#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#define ll long long
using namespace std;

inline ll read()
{
    ll f = 0, x = 0;
    char ch = getchar();
    while (!isdigit(ch))
        f |= (ch == '-'), ch = getchar();
    while (isdigit(ch))
        x = (x << 1) + (x << 3) + (ch ^= 48), ch = getchar();
    return f ? -x : x;
}

ll a[1000001], n, maxn;

int main()
{
    n = read();
    ll now;
    now = read();
    maxn = now;
    if (now > 0)
        ;
    else
        now = 0;
    for (int i = 2; i <= n; ++i)
    {
        ll x = read();
        if (x > 0)
        {
            now += x;
            maxn = max(now, maxn);
        }
        else if (now + x < 0)
        {
            if (now == 0)
                maxn = max(x, maxn);
            else
                now = 0;
        }
        else
        {
            now += x;
        }
    }
    printf("%lld\n", maxn);
    return 0;
}