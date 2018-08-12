#include<iostream>
using namespace std;
int sub_seq(string s, string output[100])
{
if(s.size()==0)
{
output[0] = '\0';
return 1; 
}
string small_sub_str = s.substr(1);
int small_output = sub_seq(small_sub_str,output);
for(int i = 0;i<small_output;i++)
{
output[i+small_output] = s[0] + output[i];
}
return 2*small_output;
} 
int main()
{
string input;
cin>>input;
string *output = new string[100];
int c = sub_seq(input,output);
for(int i=0;i<c;i++)
{
cout<<output[i]<<endl;
}
delete [] output;
return 0;
}
