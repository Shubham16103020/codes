#include<iostream>
using namespace std;
class triplet{
public:
int gcd;
int x;
int y;
};
triplet Extended_gcd( int a,int b)
{
triplet myAns;
if(b==0)
{
myAns.gcd = a;
myAns.y = 0;
myAns.x = 1;
return myAns;
}
triplet smallAns = Extended_gcd (b,a%b);
myAns.gcd = smallAns.gcd;
myAns.x = smallAns.y;
myAns.y = (smallAns.x)-((a/b)*smallAns.y);
return myAns; 
}
int main()
{
int a,b;
cin>>a>>b;
triplet myAns = Extended_gcd(a,b);
cout<< myAns.gcd<<endl;
cout<<myAns.x<<endl;
cout<<myAns.y<<endl;
return 0;
}
