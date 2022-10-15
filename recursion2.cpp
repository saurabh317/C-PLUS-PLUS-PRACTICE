#include<iostream>
using namespace std;
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    return n*power(n,p-1);
}
int main()
{
    int a,b;
    cout<<"enter the value of n and p"<<endl;
    cin>>a>>b;
    cout<<"the value of "<<"power(a,b)"<<" is "<<power(a,b);
}