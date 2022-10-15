#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,z,j,i;
cout<<"enter max";
cin>>n;

for(i=1;i<=2*n;i++)
{
    if(i>n)
    {
        z=(2*n-i);
}
else
z=i;
for(j=1;j<=z;j++)
{
    cout<<"*";
}
cout<<endl;
}
getch();
}