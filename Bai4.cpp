
#include<iostream>
#include<math.h>
using namespace std;
#define ll long long

ll solve(ll a,ll b)
{
	while(b != 0)
	{
		swap(a,b);
		b %= a;
	}
	return a;
}

int main()
{
	ll a,b;
	cin >> a >> b;
	cout << a * b / solve(a,b);
	return 0;
}
