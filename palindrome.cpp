#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,rev=0;
    int temp;
    cout<<"enter the number"<<endl;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        
        rev=(rev*10)+temp%10;//tem%10=rem
        temp=temp/10;
    }
    cout<<"rev no.="<<rev<<endl;

    if(rev==n)
    {
        cout<<"the given  is palindrome no";

    }
    else
    {
        cout<<"the given no is not a palindrome no";

    }
getch();
}