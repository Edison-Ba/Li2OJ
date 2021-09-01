/*---------------------------------
 *Author: EdisonBa 
 *Title number: Li2-OJ
 *Creation date: 2021
 *Tips: Happy every day!!!
 *-------------------------------*/
#pragma GCC optimize("Ofast")
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

ll n;

int main()
{

    return 0;
}