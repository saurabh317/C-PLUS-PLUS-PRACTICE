#include<iostream>
#include<conio.h>
using namespace std;
void arrdisplay(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int temp=0;
        for(int j=0;j<(n-1-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"enter the maximum value"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
}

cout<<"array before sorting\n";
arrdisplay(arr,n);
bubblesort(arr,n);
cout<<"\narray after sorting\n";
arrdisplay(arr,n);
getch();
}
