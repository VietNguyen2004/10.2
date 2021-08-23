#include<iostream>

using namespace std;
bool prime[10000001];
int a[1001];
void sangnt(int n)
{
	for(int i = 2;i <= n;i ++) prime[i] = true;
	for(int i = 2;i * i <= n;i ++)
	{
		for(int j =i ;j <= n;j += i)
		{
			prime[j] = false;
		}
	}
}

int solve(string s)
{
	short int max_ele = 0;
	int res =0;
	for(char x : s)
	{
		int k = x - '0';
		if(k > max_ele)max_ele = k;
		res += k;
	}
	return res *10 + max_ele;
}

int main()
{
	int so_sang = INT_MIN;
	int t;
	
	string s;
	cin >> t;
	
	for(int i= 1;i <= t;i ++)
	{
		cin >> s;
		a[i] = solve(s);
		if(a[i] > so_sang) so_sang = a[i];
	}
	
	sangnt(so_sang);
	
	for(int i = 1;i <= t;i ++)
		cout<<boolalpha<<prime[a[i]]<<endl;
}
