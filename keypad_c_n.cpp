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
int keypad(int input,string output[]){
if(input ==0){
output[0] = " ";
return 1;
}
int second_digit = input % 10;
string options = get(second_digit);
int first_digit = input / 10; 
int small_output = keypad(first_digit , output);
for(int i=0;i<options.size()-1;i++)
{
for(int j=0;j<small_output;j++){
output[j + (i + 1)*small_output]  = output[j];
}
}
int k =0;
for(int i =0;i<options.size();i++){
for(int j =0;j<small_output;j++){
output[k] = options [i] + output[k];
k++;
}
}
return (small_output * options.size());
}
int main()
{
string output[100000];
int input;
cin>>input;
int c = keypad(input,output);
cout<<c<<endl;
for(int i=0;i<c;i++)
cout<<output[i]<<endl;
return 0;
}
