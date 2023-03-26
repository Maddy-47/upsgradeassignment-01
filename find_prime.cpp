#include<iostream>
using namespace std;
int main(){
int num,cou;
cout<<"enter number:";
cin>>num;
for(int i=2;i<num;i++){
   if( num%i==0){
    cou =0;
    break;
   }
   else{
    cou =1;
   }

}
    if(cou==0){
   cout<<num<<" is odd";
}
    else{
        cout<<num<<" is prime";
    }
    return 0;
}
