#include<iostream>
#include<algorithm>
using namespace std;
int a[1000000] = {};
int pt[2] = {};
int gcd(int a,int b)
{
	while(b != 0)
	{
		swap(a,b);
		b %= a;
	}
	return a;
}

void solve(int a1[], int a2[])
{
	int tu = a1[0] * a2[0];
	int mau = a1[1] * a2[1];
	if(tu == 0){
		pt[0] = 0;
		pt[1] = 0;
		return ;
	}
	int k = gcd(tu,mau);
	pt[0] = tu/k;
	pt[1] = mau/k;
}

int main()
{
	int n;
	cin >> n;
	int t,m;
	cin >> t>> m;
	pt[0] = t;
	pt[1] = m;
	for(int i = 2;i <= n;i ++)
	{
		if(pt[0] == 0) {
			cout<<0<<" "<<0;
			return 0;
		}
		cin >> t >> m;
		int pt2[] = {t,m};
		solve(pt,pt2);
	}
	cout<<pt[0]<<" "<<pt[1];
}
