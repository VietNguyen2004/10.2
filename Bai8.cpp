#include<iostream>
using namespace std;
#define ll long long

ll big_mod(ll x,ll y ,ll z)
{
	x %= z;
	if(x == 0)return 0;
	ll res = 1;

	while(y)
	{
		if(y & 1) res = (res * x) % z;
		y = y >> 1;
		x = (x * x) % z;
	}
	return res;
}

int main()
{
	ll x,y,z;
	cin >> x >> y >> z;
	cout<< big_mod(x,y,z);
}
