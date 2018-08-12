#include<iostream>
#include<set>
using namespace std;
int main()
{
set<int> s;
// we can  not insert same element into the set
// set works like balanced binary search tree
// it search in o(logn) and finds in o(logn)
int a[] ={1,2,3,4,5,6,4,3,0};
set<int> :: iterator it;
for(int i=0;i<9;i++)
{
s.insert(a[i]);
}
for(it =s.begin();it!=s.end();it++)
{
cout<<*it<<endl;
}
return 0;
}
