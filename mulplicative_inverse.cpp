#include<iostream>
using namespace std;
class triplet{
public:
int gcd;
int x;
int y;
};
triplet mod_inver(int a,int b){
if(b==0){
triplet ans;
ans.gcd =a;
ans.x = 1;
ans.y = 0;
return ans;
}
triplet Ans;
triplet myAns = mod_inver(b,a%b);
Ans.gcd = myAns.gcd;
Ans.x = myAns.y;
Ans.y = (myAns.x)-((a/b)*(myAns.y));
return Ans;
}
int main(){
cout<< " TO FIND THE VALUE OF INVERSE MODULAR A"<<endl;
cout<<" ENTER VALUE OF A AND MODULAR M "<<endl;
int a,m;
cin>>a>>m;
triplet ans = mod_inver(a,m);
if(ans.gcd == 1){
cout<<ans.gcd<<endl;
cout<<" MULTIPLICATIVE INVERSE OF A IS : "<<ans.x<<endl;
cout<<ans.y<<endl;
}else 
cout<< "MULTIPLICATIVE INVERSE NOT POSSIBLE "<<endl;

return 0;
}
