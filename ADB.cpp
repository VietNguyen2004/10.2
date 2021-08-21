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
	int id = 0;
	int n,k;
	cin >> n >> k;
	for(int i= 0;i < n;i ++) cin >> a[i];
	sort(a,a+n);
	while(a[id] == 0) id++;
	int m = gcd(a[id],a[id+1]);
	if(m == 1)
	{
		cout<<0;
		return 0;
	}
	cout<< m * (k / m);
}
