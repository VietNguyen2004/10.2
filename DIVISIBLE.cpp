#include<iostream>
using namespace std;
int a,b;
int solve(int c)
{
	int start = (a % c ==0) ? a/c : a/c + 1;
	int ends = b/c;
	return (ends-start) + 1;
}

int main()
{
	int t;
	cin >>t;
	for(int i = 1;i <= t;i ++)
	{
		cin >> a >> b;
		cout<<solve(4)  + solve(7) + solve(11) - solve(28) -solve(44) - solve(77) ;
	}
}
