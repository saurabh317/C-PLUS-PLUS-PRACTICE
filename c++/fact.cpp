#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no"<<endl;
    cin>>n;
   int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
cout<<"the factorial of no. is "<<fact<<endl;
}