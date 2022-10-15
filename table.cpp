#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,p;
    cout<<"entr the no whose table u want to know"<<endl;
    cin>>n;
    for(i=1;i<=10;i++)
    {
        p=n*i;
        cout<<n<<"*"<<i<<"="<<p<<endl;

    }
    getch();
}