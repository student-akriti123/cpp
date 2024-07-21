#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter the value of a:";
cin>>a;

int b;
cout<<"Enter the value of b:";
cin>>b;

int c;
cout<<"Enter the value of c:";
cin>>c;
if(a>b&&a>c)
{
cout<<"a is greater all of them";
}
if(b>a&&b>c)
{
cout<<"b is greater all of them";
}
if(c>b&&c>a)
{
cout<<"c is greater all of them";
}
return 0;
}
