#include<iostream>
using namespace std;
#define ll long long
bool a[10000000];
ll calc(int n,int k)
{
	int nums = 2;
	int id = 0;
	while(true)
	{
		int multi = n / nums;
		for(int i = 1 ;i <= multi ; i ++)
		{
			if(!a[nums*i] )
			{
				a[nums*i] = 1;
				id ++;
				if(id == k) return nums*i;
			}
		}
		while(a[nums]) nums ++;
	}
}

int main()
{
	ll n,k;
	cin >> n >> k ;
	cout<< calc(n , k);
}
