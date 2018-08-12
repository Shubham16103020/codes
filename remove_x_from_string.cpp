#include<iostream>
using namespace std;
void remove(char a[])
{
if(a[0] == '\0')
return;
if(a[0] != 'x')
remove(a + 1);
else{
int i =1;
for(;a[i] != '\0';i++)
a[i-1] = a[i];
a[i-1] ='\0';
remove(a);
}
}
int main()
{
char  a[100];
cin>>a;
remove(a);
cout<<a<<endl;
return 0;
}
