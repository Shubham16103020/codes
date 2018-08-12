#include<iostream>
#include<algorithm>
using namespace std;
int partition(int a[],int si,int ei)
{
int count =0;
int pivot = a[si];
for(int i=si+1;i<=ei;i++)
{
if(a[i] <= pivot)
count++;
}
int pivot_index = si+count;
swap(a[pivot_index],a[si]);
int i =si;
int j = ei;
while(i < pivot_index && j > pivot_index)
{
if(a[i] <= pivot){
i++;}
else if(a[j] > pivot)
j--;
else{
swap(a[i],a[j]);
i++;
j--;
}
}
return pivot_index;
}
void quick_sort(int a[],int si,int ei)
{
if(si>=ei)
return;
int c = partition(a,si,ei);
quick_sort(a,si,c-1);
quick_sort(a,c+1,ei);
}
int main()
{
int a[] ={9,8,7,6,5,4,3,2,1};
quick_sort(a,0,8);
for(int i=0;i<9;i++)
cout<<a[i]<<" ";
cout<<endl;
return 0;
}
