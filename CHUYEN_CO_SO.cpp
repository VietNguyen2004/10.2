#include<iostream>
using namespace std;

int main()
{
	long long n;
	int base;
	cin >> n >> base;
	if(base == 10)
	{
		cout<<n;
		return 0;
	}
	string res = "";
	while(n)
	{
		res = to_string(n % base) + res;
		n /= base;
	}
	cout<<res;
}
