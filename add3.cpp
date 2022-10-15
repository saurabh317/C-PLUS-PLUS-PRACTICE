#include<iostream>
using namespace std;
int main()
{
    int n,c=0,a=3,sum=0;
    cout<<"enter max term";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        c=c+a*i;
        sum=sum+c;
    }
    cout<<sum;
}