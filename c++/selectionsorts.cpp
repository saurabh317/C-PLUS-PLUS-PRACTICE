#include<iostream>
using namespace std;
void selectionsort(int a[],int n)
{   
    int temp;
    int i,j;
    int min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
            
           


        }
         temp=a[i];
         a[i]=a[min];
        a[min]=temp;
    }
}
void array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
int main()
{
    int i=0;
    int min=0;
    int n;
    cout<<" enter the size "<<endl;
    cin>>n;
    int a[n];
    cout<<" enter the elements of the array "<<endl;
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];

    }
    array(a,n);
    cout<<"\n";
selectionsort(a,n);
    array(a,n);


    
    return 0;
}