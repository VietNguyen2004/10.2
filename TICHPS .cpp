#include<iostream>
#include<algorithm>
using namespace std;
int a[1000000] = {};
int gcd(int a,int b)
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
	int t1,m1,t2,m2;
	cin >> t1>> m1 >> t2>> m2;
	int t = t1*t2;
	int m = m1*m2;
	if(t == 0)
	{
		cout<<0;
		return 0;
	}
	int k = gcd(t,m);
	cout<<t/k<<" "<<cm/k;
}
