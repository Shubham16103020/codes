#include<iostream>
#include<vector>
using namespace std;
#define MAX 50001
#define mod 1000000007
vector<int>* seive(){
  vector<int>* prime = new vector<int>();
  bool isprime[MAX];
  for(int i=0;i<=MAX;i++){
    isprime[i] = true;
  }
  isprime[0] = false;
  isprime[1] = false;
  for(int i=2;i*i<=MAX;i++){
    if(isprime[i] == true){
    	for(int j = i*i;j<=MAX;j++){
      		isprime[j] = false;
       }
    }
  }
  for(int i =2;i<=MAX;i++){
    if(isprime[i] == 1){
      prime->push_back(i);
    }
  }
  return prime;
}
long long devisors(int n,vector<int>* &prime)
{
  long long result =1;
  for(int i=0;prime->at(i)<=n;i++)
  {
    long long count = 0;
    int k = prime->at(i);
    while((n/k) != 0){
      count = count + ((n/k)) % mod;
      k = k * prime->at(i); 
    }
    result = (result * ((count+1)%mod))%mod;
  }
  return result; 
}
int main(){
  vector<int>* prime = seive();
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<devisors(n,prime)<<endl;
  }
	return 0;
}