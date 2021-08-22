#include<iostream>
#include<math.h>
using namespace std;

int s(int n)
{
	if(n < 2) return 0;
	int k = 2;
	int res = 0;
	while(n != 1)
	{
		while(n % k !=  0) k ++;
		while(n % k == 0) n /= k;
		res ++;
	}
	return res;
}
int main()
{
	int n;
	cin >> n ;
	cout<<s(n);
}
