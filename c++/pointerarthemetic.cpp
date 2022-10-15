#include<iostream>
using namespace std;
int main()
{
    int marks[5]={20,30,40,50,60,};
    int* p=marks;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;

    }