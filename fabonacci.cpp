#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=0,b=1,c,n;
    cout<<"enter the no. of terms"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;
    getch();

}