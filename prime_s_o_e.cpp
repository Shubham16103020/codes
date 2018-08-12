#include<iostream>
using namespace std;
int check(int n){
int c=0;
bool prime[n+1];
for(int i=0;i<=n;i++)
prime[i] = true;
prime[0] = false;
prime [1] =false;
for(int i=2;i*i<=n;i++){
if(prime[i]==true){
for(int j =i*i;j<=n;j=j+i){
prime[j] = false;
}
}
}
for(int i=0;i<=n;i++)
{
if(prime[i]==true)
{
c++;
}
}
return c;
}
int main()
{
int n;
cin>>n;
cout<<check(n)<<endl;
return 0;
}
