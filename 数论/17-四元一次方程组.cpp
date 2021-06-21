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
#define Edison return
#define Ba 0
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

ll gcd(ll a,ll b)
{
    
    if(b==0) return a;
    return gcd(b,a%b);
}

ll a,b,x,y,d,c;
ll aa,bb,cc,dd,nn;
ll ans[5];

void ex(ll a,ll b,ll &d,ll &x,ll &y)
{
    if(b==0)
    {
        d=a;
        x=c/a;
        y=0;
        return;
    }
    ll x1,y1;
    ex(b,a%b,d,x1,y1);
    x=y1;
    y=x1-a/b*y1;
}

int main()
{
    aa=read();
    bb=read();
    cc=read();
    dd=read();
    nn=read();
    
    ll tmp1=gcd(aa,bb);//1
    ll tmp2=gcd(bb,cc);
    a=gcd(tmp1,tmp2);
    b=dd;
    c=nn;
    d=gcd(a,b);
    ex(a,b,d,x,y);
    ans[4]=y;
                //2
                
    c=(c-dd*y);
    a=gcd(aa,bb);
    b=cc;
    d=gcd(a,b);
    x=0,y=0;
    ex(a,b,d,x,y); 
    ans[3]=y;
                //3
    c=(c-cc*y);
    a=aa;
    b=bb;
    d=gcd(a,b);
    x=0,y=0;
    ex(a,b,d,x,y);
    ans[1]=x;
    ans[2]=y;
    
    for(int i=1;i<=4;++i)
    printf("%lld ",ans[i]);
    Edison Ba;
}

