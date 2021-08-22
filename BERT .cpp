
#include<iostream>
using namespace std;

#define nmax 20000000
bool p[nmax] = {};
void eras(int n)
{
	for(int i = 2;i <= n;i ++) p[i] = 1;
	for(int i = 2;i <= n;i ++)
	{
		for(int j = i *i ;j <= n;j += i)
		{
			p[j] = 0;
		}
	}
}
int main()
{
	int n;
	int res = 0;
	cin >> n;
	eras(2*n);
	for(int i = n + 1;i <= 2*n ; i ++)
	{
		if(p[i]){
			res ++;
		}
	}
	cout<<res;
}
