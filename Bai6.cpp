#include<iostream>
#include<math.h>
using namespace std;
#define ll long long234

ll gcd(ll c, ll d)
{
	while(d != 0)
	{
		swap(c,d);
		d %= c;
	}
	return c;
}
ll lcm(ll c, ll d)
{
	return c * d / gcd(c,d);
}

ll solve(ll a,ll b,ll c)
{
	ll start = (a % c ==0) ? a/c : a/c + 1;
	ll ends = b/c;
	return (ends-start) + 1;
}

int main()
{
	ll a,b,c,d;
	cin >> a >> b >> c >> d;
	cout<<solve(a,b,lcm(c,d));
}
