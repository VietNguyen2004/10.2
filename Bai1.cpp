// Tìm số lượng ước nguyên dương của số nguyên N;

#include<iostream>
using namespace std;
#define ll long long
ll solve(ll n)
{
	if(n < 0)  return 0;
	if(n == 1 || n == 0) return n;

	ll result = 1;
	ll k = 2;
	while (n != 1)
	{
		while(n % k != 0) k ++;

		int multi = 0;
		while(n % k == 0)
		{
			n /= k;
			multi ++;
		}
		result *= (multi + 1);
	}
	return result;
}

int main()
{
	ll n;
	cin >> n;
	cout << solve(n);
	return 0;
}
