#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> v(5);
vector<int>::iterator it;
for(it=v.begin();it!=v.end();it++)
{
v.push_back(*it+1);
}
for(it=v.begin();it!=v.end();it++)
{
cout<<*it<<endl;
}
return 0;
}
