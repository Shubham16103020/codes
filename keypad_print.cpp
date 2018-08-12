#include<iostream>
using namespace std;
string get(int d)
{
if(d==2)
return("abc");
if(d==3)
return("def");
if(d==4)
return("ghi");
if(d==5)
return("jkl");
if(d==6)
return("mno");
if(d==7)
return("pqrs");
if(d==8)
return("tuv");
if(d==9)
return ("wxyz");
else 
return(" ");
}
void keypad(int d,string output){
	if(d==0){
		cout<<output<<endl;
		return;
	}
	int last_digit = d % 10;
	int small_num = d / 10;
	string small_string = get(last_digit);
	int l = small_string.size();
	for(int i=0;i<l;i++){
		keypad(small_num,small_string[i] + output);
}
}
int main()
{
	int d;
	string output =" ";
	cin>>d;
	keypad(d,output);

	return 0;
}