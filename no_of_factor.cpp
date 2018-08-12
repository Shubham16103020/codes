#include<iostream>
using namespace std;
int main(){
	int n,c,ans = 1;
	cin>>n;
	for(int i=2;i<=n;i++){
		c = 0;
		while(n%i == 0){
			n/=i;
			c++;
		}
 		ans = ans * (c+1);
	}
	cout<<ans<<endl;
	return 0;
}