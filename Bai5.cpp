
#include<iostream>
#include<math.h>
using namespace std;
#define ll long long

ll solve(ll a,ll b,ll c)
{
	ll start = (a % c ==0) ? a/c : a/c + 1;
	ll ends = b/c;
	return (ends-start) + 1;
}

int main()
{
	ll a,b,c;
	cin >> a >> b >> c;
	cout<<solve(a,b,c);
}
