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

struct node{
	double x,y;
}a[200002];
ll n;
double ans=0x7ffffff;

bool cmp(node u,node l)
{
	return u.x<l.x;
}

double far(int X,int Y)
{
	return abs((a[X].x-a[Y].x)*(a[X].x-a[Y].x)+(a[X].y-a[Y].y)*(a[X].y-a[Y].y));
}

int main()
{
	n=read();
	for(int i=1;i<=n;i++)
		a[i].x=read(),a[i].y=read(); 
	
	if(n<=100)
    {
		for(int i=1;i<=n-1;i++)
        {
			for(int j=i+1;j<=n;j++)
            {
				ans=min(ans,far(i,j));
			}
		}
		ans=sqrt(ans);
		printf("%.lf\n",ans);
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n-5;i++)
    {
		for(int j=1;j<=5;j++)
        {
			ans=min(ans,far(i,i+j));
		}
	}
	ans=sqrt(ans);
	printf("%.lf\n",ans);
	return 0;
}

