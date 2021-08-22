//cho dãy arr, tìm số m sao cho từng phần tử trong dãy arr % m == const

#include<iostream>
using namespace std;
#define nmax 1000000

int a[nmax];
int b[nmax];

int gcd(int a,int b)
{
	while(b != 0)
	{
		a %= b;
		swap(a,b);
	}
	return a;
}

int main()
{
	int n;
	cin >> n;
	cin >> a[1];
	for(int i = 2;i <= n;i ++)
	{
		cin >> a[i];
		b[i] = abs(a[i] - a[i-1]);
	}
	int res = gcd(b[2],b[3]);
	for(int i = 4;i <= n ;i ++)
	{
		res = gcd(res,b[i]);
		if(res == 1) {
			cout<<0;
			return 0;
		}
	}
	for(int i =2 ;i <= res;i ++)
	{
		if(res % i == 0) cout<<i<<" ";
	}
}
