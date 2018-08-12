#include<iostream>
using namespace std;
int fib_fun(int n)
{
if(n == 0 || n==1)
return n;
int first = fib_fun(n-1);
int second = fib_fun(n-2);
return first + second;
}
int main()
{
int n;
cin>>n;
cout<<fib_fun(n)<<endl;
return 0;
}
