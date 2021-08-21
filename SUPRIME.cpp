#include<iostream>
using namespace std;
#define nmax 400001
#include<vector>
bool prime[nmax] ;
void sangnt()
{
	for(int i = 2;i <= nmax;i++)
		prime[i] = 1;
	for(int i = 2;i *i <= nmax;i ++)
	{
		for(int j = i*i ;j <= nmax;j += i)
		{
			prime[j] = 0;
		}
	}
}

int main()
{
	sangnt();
	int n;
	cin >>n;
	vector<int> r;
	int id = 1;
	int length = 0;
	for(int i = 2;i <= 40000;i ++) if(prime[i])
	{
		if(prime[i] && prime[id]) length ++;
		id ++;
		if(length == n)
		{
			cout<<i;
			return 0;
		}
	}
}
