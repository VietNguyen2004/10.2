#include<iostream>
using namespace std;
#define ll long long

ll calc(ll x,ll y)
{
	if(y <= 0) return 0;
	if(x <= 0) x = 0;
	ll count = y - x + 1;
	return (x+y)/2 * count;
}

int main()
{
	ll x,y;
	cin >> x >> y ;
	cout<< calc(x,y);
}
