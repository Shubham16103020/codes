#include<iostream>
using namespace std;
void  merge_sort(int a[],int si,int end)
{
int b[100];
int mid = (si+end)/2;
int i = si;
int j = mid+1;
int k = 0;
while(i<=mid && j<=end){
if(a[i]<a[j]){
b[k++] = a[i++];
}
else 
b[k++] = a[j++];
}
while(i<=mid)
{
b[k++] = a[i++];
}
while(j<=end){
b[k++] = a[j++];
}
int m=0;
for(int i = si;i<=end;i++)
{
a[i] = b[m++];
}
}
void merge(int a[],int si,int end)
{
if(si >= end)
return;
int mid = (si+end)/2;
merge(a,si,mid);
merge(a,mid+1,end);
merge_sort(a,si,end);
}
int main()
{
int a[] = {9,8,7,6,5,4,3,2,1};
merge(a,0,8);
for(int i=0;i<9;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}
