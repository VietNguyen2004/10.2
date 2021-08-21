#include<iostream>
#include<math.h>
using namespace std;
double a,b,c,d,e,f,n;
bool check(int n)
{
	return sqrt(n) == (int) sqrt(n);
}
int main(){
	int n;
	cin >> n;
	int k;
	for(int i = 1;i <= n;i ++){
		cin >> k;
		cout<<boolalpha<<check(k);
	}
} 
