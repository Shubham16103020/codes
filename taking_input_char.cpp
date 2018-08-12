#include<iostream>
using namespace std;
int length(char a[]){
if(a[0] == '\0')
return 0;
int small_ans = length(a + 1);
return 1 + small_ans;
}
int main()
{
char a[100];
cin>>a;
int l = length(a);
cout<<l<<endl;
return 0;
}
