#include<iostream>
#include<math.h>
using namespace std;
#define ll long long


int main()
{
	ll n;
	cin >> n;
	ll k = (ll) sqrt(n);
	while(n % (k*k) != 0) k--;
	cout<<k <<"  "<<n / (k * k);
}
