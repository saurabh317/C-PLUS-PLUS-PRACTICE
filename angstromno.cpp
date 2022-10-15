#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0;
    cout<<"enter a number to check";
    cin>>num;
    int temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
}
cout<<sum<<endl;
if(sum==num)
{
    cout<<"angstorm number";
}
else
cout<<"not an angstorm number";
}