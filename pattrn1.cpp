#include<iostream>
using namespace std;
int main()
{
    int n;
   
cout<<"input max number";
cin>>n;

    for(int i=0;i<=n;i++)
    {
       char z='A';
    for(int j=1;j<=(n-i);j++)
        {
        cout<<z;
        z++;

    }
    cout<<endl;
    }
}