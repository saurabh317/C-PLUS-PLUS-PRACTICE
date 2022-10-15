#include<iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void selectionsort(int arr[],int n)
{
    int minIndex,temp;
    for(int i=0;i<n-1;i++)
    {
        minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
}
int main()
{
    int n;
    cout<<"enter the max number"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nelements before sorting\n";
    printarr(arr,n);
    selectionsort(arr,n);
    cout<<"\nelements after sorting\n";
    printarr(arr,n);
}