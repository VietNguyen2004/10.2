#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
#define module 1000000007

ll fibonaci(int n)
{
	if(n == 0 || n== 1) return n;
	ll a = 0;
	ll b = 1;
	int k = 0;
	while(k < n)
	{
		k++;
		a += b;
		swap(a,b);
		a %= module;
		b %= module;
	}
	return a;
}

int main()
{
	int n;
	cin >> n;
	cout<<fibonaci(n);
}
