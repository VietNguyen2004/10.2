#include<iostream>
using namespace std;
int a[100000];
bool Prime[1000000];
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
	int max_elements = INT_MIN;
	int n;
	cin >> n;
	for(int i = 1;i <= n;i ++){
		cin >> a[i];
		if(a[i] > max_elements) max_elements = a[i];
	}
	sang(max_elements);
	int res = 0;
	for(int i =1;i <= n ;i ++)
	{
		if(Prime[a[i]]) {
			res ++;
		}
	}
	cout<<res;
}
