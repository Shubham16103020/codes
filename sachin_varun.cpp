#include<iostream>
using namespace std;

int main()
{
	int a,b,d,c=0;
	cin>>a>>b>>d;
	int max = d/b;
	for(int y =0;y<=max;y++){
		int h = d-b*y;
		if(h%a==0)
		{
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}