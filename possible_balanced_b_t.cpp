#include<iostream>
using namespace std;
int balanced(int n){
const int mod = 1000000000 + 7;
if(n<=1)
return 1;
int x = balanced(n-1);
int y = balanced(n-2);
int a =(int)(((long long) x*x)% mod);
int b = (int)(((long long) 2*x*y)%mod); 
int c = ( a + b)%mod;
return c;
}
int main(){
int n;
cin>>n;
cout<<balanced(n)<<endl;
return 0;
}
