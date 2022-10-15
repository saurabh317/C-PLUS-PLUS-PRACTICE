#include<iostream>
using namespace std;
void bubblesort(int a[],int n);
void array(int a[],int n);
int main()
{
    int n;
    cout<<" enter the size of array "<<endl;
    cin>>n;
    int a[n];
    cout<<" enter the elements of the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<" before sorting\n ";
    array(a,n);
    bubblesort(a,n);
    cout<<"\nafter sorting "<<endl;
    array(a,n);
    return 0;
}
void bubblesort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
               temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}