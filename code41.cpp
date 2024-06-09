#include<iostream>
using namespace std;
int main(){

int l;
cout<<"l:";
cin>>l;

int b;
cout<<"b:";
cin>>b;

int area=l*b;
int perimeter=2*(l+b);

if(area>perimeter)
    cout<<"area is greater";

    else
        cout<<"perimeter is greater";

}

