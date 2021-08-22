// n (n+1)(2n+1)
#include<iostream>
using namespace std;
#define module 1000000007
#define ll long long
int main()
{
	double start, end;
	cin >> start >> end;

	int a, b;

	if((int)start != start) a = (int) start + 1;
	else a = (int) start;

	b = (int) end;

	ll res2 = (b*(b + 1)*(2*b+1)/6) % module;
	ll res1 = ((a-1)*a*(2*a-1)/6) % module;

	cout<<abs(res2  - res1);
}
