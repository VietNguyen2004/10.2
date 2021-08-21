#include<iostream>
#include<math.h>
using namespace std;

bool prime(int n)
{
	for(int i =2 ;i <= sqrt(n);i ++)
		if(n % i == 0) return false;
	return true;
}

int main()
{
	int n;
	cin >> n;
	if(n < 2){
		cout<<"NO";
		return 0;
	}
	while(n != 0)
	{
		if(!prime(n))
		{
			cout<<"NO";
			return 0;
		}
		n /= 10;
	}
	cout<<"YES";
	return 0;
}
