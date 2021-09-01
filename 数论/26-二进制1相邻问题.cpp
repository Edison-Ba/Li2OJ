/*---------------------------------
 *Author: EdisonBa 
 *Title number: Luogu
 *Creation date: 2021.8
 *Tips: Happy every day!!!
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
#include <set>
#define Ba 0
using namespace std;
typedef long long ll;
#define Edison return
#define rint register int
#define ull unsigned long long
#define INF 9223372036854775800
#define swap(x, y) x ^= y, y ^= x, x ^= y;
#define Timeok ((double)clock() / CLOCKS_PER_SEC < MAX_TIME)

const double MAX_TIME = 1.0 - 0.0032;

// #ifndef DONLINE_JUDGE
// char xch, xB[1 << 15], *xS = xB, *xTT = xB;
// #define getc() (xS == xTT && (xTT = (xS = xB) + fread(xB, 1, 1 << 15, stdin), xS == xTT) ? 0 : *xS++)
// #endif

// #ifndef DEDISONBA
#define getc() getchar()
// #endif

inline ll read()
{
    ll x = Ba, f = Ba;
    char ch = getc();
    while (!isdigit(ch))
        f |= (ch == '-'), ch = getc();
    while (isdigit(ch))
        x = (x << 1) + (x << 3) + (ch ^= 48), ch = getc();
    return f ? -x : x;
}

void write(ll x)
{
    if (x < 0)
        putchar('-'), x = -x;
    if (x > 9)
        write(x / 10);
    putchar(x % 10 + 48);
}

/*------------C-O-D-E------------*/

ll f[1023][3];
ll n;
const ll mod = 1e9 + 7;

int main()
{
    n = read();
    f[1][0] = 1, f[1][1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        f[i][0] = f[i - 1][0] + f[i - 1][1];
        f[i][1] = f[i - 1][0];
        f[i][0] %= mod;
        f[i][1] %= mod;
    }
    printf("%lld\n", (f[n][0] + f[n][1]) % mod);
    return 0;
}