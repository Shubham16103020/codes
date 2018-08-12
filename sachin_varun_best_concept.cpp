#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
class triplet{
public:
ll gcd;
ll x;
ll y;
};
triplet fun(ll a,ll b){
if(b ==0 ){
triplet ans;
ans.gcd = a;
ans.x = 1;
ans.y = 0;
return ans;
}
triplet myAns;
triplet small_ans = fun(b,a%b);
myAns.gcd = small_ans.gcd;
myAns.x =small_ans.y;
myAns.y = (small_ans.x) - (a/b)*((small_ans.y));
return myAns;
}
ll mod_inverse(ll a,ll m){
ll x = fun(a,m).x;
return (x%m + m)% m;
}
int main(){
int t;
cin>>t;
while(t--){
ll a,b,d;
cin>>a>>b>>d;
triplet ans = fun(a,b);
cout<<ans.gcd<<endl;
cout<<ans.x<<endl;
cout<<ans.y<<endl;
ll g = ans.gcd;
// special cases
if(d%g){
cout<< 0 <<endl;
continue;
}
if(d==0){
cout<< 1 <<endl;
continue;
}

a/=g;
b/=g;
d/=g;
triplet k = fun(b,a);
ll k1 = k.x;
ll y1 = (( d%a ) * k1 )% a;
int first_value = d/b;
if(d < y1 * b){
	cout<<0<<endl;
	continue;
}
ll n = (first_value - y1)/a;
ll total = n + 1;
cout<< "ans is :";
cout<< n+1<<endl;
}
return 0;
}
