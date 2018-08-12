#include<iostream>
using namespace std;
bool is_sorted(int a[],int n)
{
if(n==0 || n==1)
return true;
if(a[0] >a[1])
return false;
if(is_sorted(a+1,n-1))
return true;
else
return false;
}
int main()
{
int a[] ={1,2,3,9,5};
cout<<is_sorted(a,5)<<endl;
return 0;
}           
