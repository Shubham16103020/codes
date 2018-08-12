#include<iostream>
#include<algorithm>
using namespace std;
struct fun
{
int st;
int end;
};
bool compare(fun i1,fun i2)
{
return i1.st < i2.st;
}
int main()
{
fun a[] ={{2,4},{3,6},{9,8},{7,6},{8,1}};
sort(a,a+5,compare);
for(int i=0;i<5;i++)
cout<<a[i].st<<" : "<<a[i].end<<endl;
return 0;
}
