#include<iostream>
using namespace std;
void print(int arr[n][m],int n,int m)
{
for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n,m;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    cout<<"enter the number column"<<endl;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    
print(arr,n,m);
}