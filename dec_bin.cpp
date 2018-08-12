#include<iostream>
using namespace std;
int fun(int n){
	if(n == 1)
		return 1;
	int d = fun(n/2);
	int r = n%2;
	d= d*10 +r;
	return d;
}
int main(){
	int n;
	cin>>n;
	cout<<fun(n);
	return 0;
}