#include<iostream>
using namespace std;
int main(){
int m;
cout<<"Enter the value of m:";
cin>>m;

int n;
cout<<"Enter the value of n:";
cin>>n;

for(int i=1;i<=m;i++)
{
for(int i=1;i<=n;i++)
{
cout<<"*";
}
cout<<endl;
}
return 0;
}
