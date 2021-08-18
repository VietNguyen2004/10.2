#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
bool isprime(ll n)
{
	ll k = (ll)sqrt(n);
	for(ll i =2 ;i <= k ; i ++) if(n % i == 0) return false;
	return true;
}

int main()
{
	ll n;
	cin >> n;
	cout<<boolalpha<<isprime(n);
}
