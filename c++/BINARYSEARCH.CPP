#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<" enter the elements of the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<" enter the key element to be searched "<<endl;
    cin>>key;
    int mid;
    int Low=0;
    int High=n;
    
    while(Low<=High){
        mid=(Low+High)/2;
    if(a[mid]==key)
    {
        cout<<" the position of the key is "<<mid+1;
    
    }
    if(a[mid]<key)
    {
        Low=mid+1;
    }
    else
    {
       High=mid-1;
    }
    }
    return -1;
    //if(x==1)
    //{
      //cout<<" search not found ";
   // }
}