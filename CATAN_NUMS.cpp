#include<iostream>
using namespace std;
#define nmax 1000000
#define module 1000000007

// số catan = 1/(n+1) * 2nCn

signed int c[10000][10000];
int arr[nmax];
void comb(int n)
{
	int k = n * 2;
	c[0][0] = 1;
	for(int i = 1;i <= k;i ++)
	{
		c[i][0] = 1;
		c[i][i] = 1;
		for(int j = 1;j <= n;j ++)
		{
			c[i][j] = c[i-1][j-1] + c[i-1][j];
			c[i][j] %= module;
		}
	}
}
int catan(int n)
{
	return (c[2*n][n])/ (n+1);
}

int main()
{
	int max_nums = INT_MIN;
	int t;
	cin >> t;
	for(int i = 1;i <= t;i ++)
	{
		cin >> arr[i];
		if(arr[i] > max_nums) max_nums = arr[i];
	}
	comb(max_nums);
	for(int i =1;i <= t;i ++) cout<<catan(arr[i])<<endl;
}
