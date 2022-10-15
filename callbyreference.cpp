#include<iostream>
using namespace std;
void swappointer(int* a,int* b)
{
 int temp=*a;
*a=*b;
*b=temp;
}

int main()
{
int x=3; 
int y=5;
swappointer(&x,&y);
cout<<"the value of a ="<<x<<endl;
cout<<" the value of b ="<<y<<endl;
return 0;
}