#include<iostream>
using namespace std;
void removex(char str[])
{
if(str[0] == '\0')
return;
if(str[0] !='x'){
removex(str + 1);
}else{
int i=1;
for(;str[i]!='\0';i++)
{
str[i-1] = str[i];
}
str[i-1] = str[i];
removex(str);
}
}
int length1(char str[])
{
if(str[0]=='\0')
return 0;
int small_length = length1(str + 1);
return 1 + small_length;
}
int main()
{
char str[100];
cin>>str;
int l = length1(str);
cout<<l<<endl;
removex(str);
cout<<str<<endl;
return 0;
}
