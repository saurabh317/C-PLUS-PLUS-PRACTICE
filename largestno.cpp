#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the three no."<<endl;
    cin>>a>>b>>c;
    if((a>b)&&(a>c))
    {
        cout<<"a is the greatest"<<endl;
        
    }
    else if((b>c)&&(b>>a))
    {
        cout<<"b is the greatest no."<<endl;

    }
    else{
        cout<<"c is the greatest no."<<endl;

    }
    getch();
}