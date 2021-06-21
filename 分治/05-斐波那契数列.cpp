/*---------------------------------
 *Title number: L2OJ 
 *Creation date: 2021.2.25
 *Author: EdisonBa 
 *-------------------------------*/
#include<cstdio>
#include<cstdlib>
#include<map>
#include<cmath>
#include<ctime>
#include<queue>
#include<string>
#include<cstring>
#include<iostream>
#include<algorithm>
#define ll long long
#define ci cosnt int &
#define INF 0x3f3f3f3f

using namespace std;
const ll mod=9997;

struct STU
{
	ll m[110][110];
}A,I;

ll n;

STU operator * (const STU &a,const STU &b)
{
	STU x;
	
	memset(x.m,0,sizeof(x.m));
	
	for(int i=1;i<=2;++i)
	{
		for(int j=1;j<=2;j++)
		{
			for(int k=1;k<=2;k++)
			{
				x.m[i][j]+=a.m[i][k]*b.m[k][j]%mod;
				x.m[i][j]%=mod;
			}
		}
	}
	return x;
 } 

void iii()
{
	memset(I.m,0,sizeof(I.m));
	memset(A.m,0,sizeof(A.m));
	I.m[1][1]=I.m[1][2]=1;
	A.m[1][1]=A.m[1][2]=A.m[2][1]=1;
}

int main(void)
{
	cin>>n;
	iii();
	if(n<=2)
	{
		cout<<1<<endl;
		return 0;
	}
	else 
	{
		n-=2;
		
		while(n>0)
		{
			if(n%2) I=I*A;
			A=A*A;
			n/=2;
		}
		cout<<I.m[1][1]<<endl;
		return 0;
	}
}//