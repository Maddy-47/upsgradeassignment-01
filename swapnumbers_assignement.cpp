#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter first number:";
cin>>a;
cout<<"enter second number:";
cin>>b;
cout<<"\nbefore swapping \nfirst number is: "<<a<<"and second number is :"<<b;
a=a+b;
b=a-b;
a=a-b;
cout<<"\nafter swapping \nfirst number is: "<<a<<"and second number is: "<<b;
return 0;
}
