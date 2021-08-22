

#include<iostream>
using namespace std;
#define nmax 1000000

int a[nmax];
int b[nmax];

int gcd(int a,int b)
{
	while(b != 0)
	{
		a %= b;
		swap(a,b);
	}
	return a;
}

int main()
{
	int t1,m1,t2,m2;
	cin >> t1 >> m1 >> t2 >> m2;
	int k = gcd(m1,m2);
	int t = t1 * (m2/k) + t2 *(m1/k);
	int m = m1 * m2 /k;
	cout<<t <<" "<<m<<endl;
}
