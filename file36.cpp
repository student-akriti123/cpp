#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n:";
cin>>n;

int m;
cout<<"Enter the value of m:";
cin>>m;


for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
cout<<  j;
}
cout<<" ";

cout<<endl;
}

return 0;
}
