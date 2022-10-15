#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  
    int n[5],sum=0;
   
    int i;
    for(int i=0;i<5;i++)
    {
        cout<<"enter the elements of array "<<i<<endl;
        cin>>n[i];
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+n[i];
    }
    cout<<"sum of all the elements of array "<<sum;
}

