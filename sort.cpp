#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a[] ={9,2,3,4,5,1,4,2,7,6,9};
sort(a,a+10);
//for(decreasing order we use function greater<int>()
sort(a,a+12,greater<int>());
for(int i=0;i<12;i++)
cout<<a[i]<<" ";
return 0;
}
