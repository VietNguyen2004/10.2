#include<iostream>
using namespace std;
#define ll long long

ll calc(ll x)
{
	ll res = 0;
	while(x >= 5)
	{
		res += x / 5;
		x /= 5;
	}
	return res;
}

int main()
{
	ll x;
	cin >> x ;
	cout<< calc(x);
}
