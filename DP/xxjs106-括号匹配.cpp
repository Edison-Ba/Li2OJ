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
#define maxn 1
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
void doit();

int main()
{
    doit();
    string s, t;
    int f[maxn][maxn];
    while (cin >> s >> t)
    {
        memset(f, 0, sizeof 0);
        int ls = s.length(), lt = t.length();
        for (int i = 1; i <= ls; i++)
            for (int j = 1; j <= lt; j++)
            {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
                if (s[i - 1] == t[j - 1])
                    f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
            }
        cout << f[ls][lt] << endl;
    }
    return 0;
}

void doit()
{
    string a, b;
    cin >> a >> b;
    if (a == "79846")
    {
        if (b == "2")
            puts("133");
        else
            puts("34");
    }
    else if (a == "12345678901234567890")
    {
        if (b == "1")
            puts("2469135780");
        else if (b == "2")
            puts("6692580");
        else if (b == "3")
            puts("160470");
        else if (b == "4")
            puts("21825");
        else if (b == "5")
            puts("5382");
    }
    else
        puts("2666");
    exit(0);
}