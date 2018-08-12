#include<iostream>
using namespace std;
#define MAX 1000000
int cube [MAX+1];
void seive(){
for(int i=0;i<=MAX;i++)
cube[i] = 0;
for(int i=2;i<=100;i++){
if(cube[i] == 0){
int k = i*i*i;
for(int j=k;j<=MAX;j=j+k)
{
cube[j] = -1;
}
}
}
int c = 0;
for(int i =1;i<=MAX;i++){
if(cube[i] == 0){
	c = c+1;
	cube[i] = c;
}
}
for(int i=1;i<=MAX;i++)
cout<<cube[i]<<" ";
}
int main(){
seive();
return 0;
}
