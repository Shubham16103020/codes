#include<iostream>
using namespace std;
#define MAX 1000000
void seive(int a[])
{
	for(int i=0;i<=MAX;i++)
		a[i] = 0;
	for(int i=2;i<=MAX;i=i+2)
	{
		a[i] = a[i] +1;
	}
	for(int i=3;i*i<=MAX;i=i+2){
		if(a[i] == 0){
			for(int j =i;j<=MAX;j=j+i){
				a[j] = a[j] + 1;
			}
		}
	}
}
int main(){
	int a[MAX +1];
	int ans[10][6887+1];
	for(int i=1;i<=10;i++)
		for(int j=1;j<=6887;j++)
			ans[i][j] =0;
	seive(a);
	for(int i=1;i<=10;i++){
		for(int j=1;j<=6887;j++){
			if(a[j] == i){
				ans[i][j] = ans[i][j-1] + 1;
			}else
			ans[i][j] = ans[i][j-1];
		}
	}
	for(int i=1;i<=10;i++){
		for(int j=1;j<=6887;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	int p,q,n,result;
	cin>>p>>q>>n;
	for(int i=0;i<=10;i++){
		for(int j=0;j<=6887;j++){
			result = ans[n][q] - ans[n][p-1];
		}
	}
	cout<<result<<endl<<" "<<"ans";

	return 0;
}