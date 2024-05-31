#include<iostream>
using namespace std;
int main(){

 int a;
cout<<"a:";
cin>>a;

int b;
cout<<"b:";
cin>>b;

int c;
cout<<"c:";
cin>>c;

if(a+b>c&&b+c>a&&c+a>b)
 cout<<"this triangle is valid";

 else
    cout<<" this triangle is not valid ";

}
