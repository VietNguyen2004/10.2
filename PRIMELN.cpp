#include<iostream>
using namespace std;
bool Prime[10000000];
void sang(int n)
{
	for(int i =2;i <= n;i ++) Prime[i] = 1;
	for(int i =2 ;i*i <= n;i ++)
	{
		for(int j = i*i ;j <= n;j += i)
		{
			Prime[j] = 0;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	sang(n);
	while(!Prime[n]) n--;
	cout<<n;
}
