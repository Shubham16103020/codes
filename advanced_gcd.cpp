#include<iostream>
using namespace std;
int gcd(int a, int b){
	if(b == 0){
		return a;
	}
	return gcd(b,a % b);
}
int main()
{
	int b = 456587,g;
	string a ="102456888888888897844444444456";
	int num = 0;
	for(int i=0;i<a.size();i++){
		a[i] = a[i] - 48;
		num = ((num*10) % b+ (a[i] % b) % b ) ;
	}
	g = gcd(num,b);
	cout<<g<<endl;
	return 0;
}