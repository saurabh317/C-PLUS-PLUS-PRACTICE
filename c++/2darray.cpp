#include<iostream>
using namespace std;
int main()
{
    int r,c;
    int i,j;
  
    cout<<" enter the no. of rows nd columns in the array "<<endl;
    cin>>r>>c;
      int a[r][c];
    cout<<" enter the elements of the array "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<" the matrix is "<<endl;
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}