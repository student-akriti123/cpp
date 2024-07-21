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

if(a+b>c&&b+c>a&&c+a>b)
{
cout<<"It is triangle";
}

else{
cout<<"It is not a triangle";
}

return 0;
}
