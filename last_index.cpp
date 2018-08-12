#include<iostream>
using namespace std;
int last_index(int a[],int n,int &x){
	if(n == 0)
		return -1;
	int small_ans = last_index(a+1,n-1,x);
	cout<< small_ans<<" ";
	if(small_ans != -1)
		return small_ans +1;
	if(a[0] == x)
		return 0;
	else 
		return -1; 
}
int main()
{
	int a[100],n;
	cin>>n;
	for(int i =0;i<n;i++)
		cin>>a[i];
	int x;
	cin>>x;
	cout<<last_index(a,n,x)<<endl;
	return 0;
}