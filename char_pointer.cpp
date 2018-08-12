#include<iostream>
using namespace std;
int main()
{
int i =65;
char c = i;
cout<< c<<endl;
int *p = &i;
char *pc =(char*) &i;
cout<<*p<<endl;
cout<< *pc <<endl;
cout<< p <<endl;
cout << pc <<endl;
// int typecasing
cout<< " int typecasting "<<endl; 
char ck ='A';
int k = ck;
cout<< k<<endl;
char *cl = &ck;
int *pl =(int *)cl;
cout<<*cl<<endl;
cout<< *pl<<endl;
return 0;
}
