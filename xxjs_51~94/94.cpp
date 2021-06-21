/*---------------------------------
 *Title number:  luogu
 *Creation date: 2020-07-27 morning
 *Author: EdisonBa
 *-------------------------------*/
#define fastcall __attribute__((optimize("-O3")))
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <cmath>
#include <stack>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <map>
#define ll long long
#define itn int
using namespace std;

int gcd(int x, int y)
{
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
int main()
{
	int k, m, n, l, a, b, aa, bb;
	double nmsl, cnm, fucc;
	scanf("%d%d%d", &a, &b, &l);

	nmsl = a * 1.0 / b;
	fucc = l * 1.0;

	for (int i = 1; i <= l; i++)
		for (int j = 1; j <= l; j++)
			if (gcd(i, j))
			{
				cnm = i * 1.0 / j;
				if (cnm >= nmsl && cnm - nmsl < fucc)
				{
					aa = i;
					bb = j;
					fucc = cnm - nmsl;
				}
			}
	printf("%d %d", aa, bb);
	return 0;
}