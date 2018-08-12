#include<iostream>
using namespace std;
int seive(int n,int b[]){
	bool a[n + 1];
	for(int i=0;i<=n;i++)
		a[i]  = true;
	a[0] = false;
	a[1] = false;
	for(int i=2;i*i<=n;i++){
		if(a[i] == true){
			for(int j =i*i;j<=n;j = j+i){
				a[j] = false;
			}
		}
	}
	int k = 0;
	for(int i=0;i<=n;i++){
		if(a[i] == true){
			b[k++] = i;
		}
	}
	return k;
}
int main()
{
	int n;
	cin>>n;
	int b[n+1];
	int k = seive(n,b);
	for(int i=0;i<k;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	int ans = 1;
	int v;
	for(int i=0;i<k;i++){
		int p = b[i];
		int n1 = n;
		v = 0;
		while(n/p != 0){
			 v = v + (n/p);
			 p = p * b[i];
		} 
		ans = ans * (v+1);
	}
	cout<<ans<<endl;
	return 0;
}