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

ll phi(int n)
{
	int k,res;
	k=2;
    res=n;
	while(k<=sqrt(n))
	{ 
        if(n%k==0) 
	    { 
            res=res/k*(k-1);
	        while(n%k==0) 
                n=n/k;
		}
	    k++;
	}
	if(n>1) res=res/n*(n-1);
	return res;
}

int main()
{
	int a,m,x;
	a=read();
	m=read();
	x=m%phi(100); 
	int s=1;
	for(int i=1;i<=x;i++)
	   s=(s*a)%100;
	printf("%d\n",s);
	return 0;
}


