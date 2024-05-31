#include<iostream>
using namespace std;
int main(){

int n;
cout<<"n:";
cin>>n;
int sum=0;
 int r=0;
 while(n!=0){
int ld=n%10;
   r=r*10;
  r=r+ld;
  n=n/10;
 sum=sum+ld;

 }
cout<<r;
cout<<endl;
cout<<sum;
}
