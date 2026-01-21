#include<iostream>
using namespace std ;
int main(){

long long k, n,t=0;

cout<<"enter the number to have as a base"<<endl;
cin>>k;
if(k==0||k==1){
  cout<<"The base cannot be "<<k;
return 0 ;
}


cout<<"enter the number"<<endl;

cin>>n;
if(k<0){k=-k;}
while(n>0){
  if(n%k==0){  n/=k;
    t++;}
else{break;}
}
cout<<t;


}