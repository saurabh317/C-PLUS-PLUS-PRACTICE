
//header file
#include<iostream>
using namespace std;
//function prototype
int array(int a[],int n,int key);
//main function
int main()
{
int n;
int i=0,key;
cout<<" enter the size of array "<<endl;
cin>>n;
int a[n];
cout<<" enter the elements of array "<<endl;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
 cout<<" enter the key element "<<endl;
    cin>>key;
cout<<array(a,n,key);
}
//function
int array(int a[],int n,int key)
int x=0;

    for(int i=0;i<n;i++)
    {
     if(key==a[i])
     {
        x=-1;
       // cout<<" found "<<endl;
     }
     else
     {
     return -1;
     //cout<<" not found "<<endl;
     }
    

    
}
   