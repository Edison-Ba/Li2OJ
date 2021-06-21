#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<stack>
#include<cmath>
#include<queue>
#include<map>
using namespace std;
typedef long long ll;

inline ll read()
{
    ll x=0,f=0;
    char ch=getchar();
    while(!isdigit(ch)) f|=(ch=='-'),ch=getchar();
    while(isdigit(ch)) x=(x<<1)+(x<<3)+(ch^=48),ch=getchar();
    return f?-x:x;
}


int euler_phi(int n)
{
    int ans = n;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            ans = ans / i * (i - 1);
            while (n % i == 0)
                n /= i;
        }
    if (n > 1)
        ans = ans / n * (n - 1);
    return ans;
}
long long now;
long long F[1000090];

void init()
{
    F[2]=1;
    for(long long i=3;i<=1000009;++i)
    {
        F[i]=F[i-1]+euler_phi(i);
    }
}

int main()
{
    now=read();
    init();
    while (now)
    {
        printf("%d",F[now]);
        putchar('\n');
        now=read();
    }
    return 0;
}


