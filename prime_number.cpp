#include<iostream>
using namespace std;
bool check(int n){
int c=0;
for(int i=1;i*i<=n;i++){
if(n%i == 0){
if(i*i == n)
c= c+1;
else
c=c+ 2;
}
}
if(c == 2)
return true;
else
return false;
}
int main()
{
int n,c=0;;
cin>>n;
for(int i=1;i<=n;i++){
if(check(i))
{
c++;
}
}
cout<<c<<endl;
return 0;
}
