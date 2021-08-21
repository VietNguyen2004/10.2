#include<iostream>
using namespace std;
double a,b,c,d,e,f,n;
void solve(){
	if(a/d == b /e ){

		if(b/e == c/f){
			cout<<"INFINITE "<<endl;;
			return ;
		}
		else{
			cout<<"NO SOLUTION "<<endl;;
			return ;
		}
	}
	double k = a/d;
	double y = (f*k - c) / (e*k - b);
	double x = (c - b*y)/ a;
	cout<<x<<y<<endl;

}
int main(){
	cin >> n;
	for(int i = 1;i <= n;i ++){
		cin >> a >> b >> c >> d >> e >> f;
		solve();
	}
}
