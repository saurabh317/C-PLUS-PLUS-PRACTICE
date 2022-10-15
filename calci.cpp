#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c=0;char z;
    cout<<"entr the 2 no."<<endl;
    cin>>a>>b;
    cout<<"enter (+,-,%,/)"<<endl;
    cin>>z;
    switch(z)
{
    case'+':c=a+b;
    cout<<"sum"<<c<<endl;
    break;
    case'-' :c=a-b;
    cout<<"result"<<c<<endl;
    break;
    case'%':c=a%b;
    cout<<"result"<<c<<endl;
    break;
    case'/':c=a/b;
    cout<<"result"<<c<<endl;
    break;
    default:
    cout<<"invalid choice";
    


}
getch();

}