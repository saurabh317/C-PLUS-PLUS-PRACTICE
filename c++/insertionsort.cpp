#include<iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void insertionsort(int arr[],int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while((j>-1)&&(arr[j]>key))
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int n;
    cout<<"enter the max number"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter  the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"elements before sorting\n";
    printarr(arr,n);
    insertionsort(arr,n);
    cout<<"elements after sorting\n";
    printarr(arr,n);
}