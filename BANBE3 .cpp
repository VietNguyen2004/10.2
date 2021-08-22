#include<iostream>
#include<math.h>
using namespace std;

int s(int n)
{
	int m = n;
	if(n < 2) return 1;
	int k = 2;
	int res = 1;
	while(n != 1)
	{
		while(n % k !=  0) k ++;
		int d = 0;
		while(n % k == 0)
		{
			d++;
			n /= k;
		}
		res *= (pow(k,d+1) - 1)/ (k - 1);
	}
	return res - m;
}
int main()
{
	int a,b;
	cin >> a >> b;
	int res = 0;
	for(int i = a; i<= b;i ++)
	{
		int k = s(i);
		if(k > i && s(k) == i) res ++;
	}
	cout<<res;
}
