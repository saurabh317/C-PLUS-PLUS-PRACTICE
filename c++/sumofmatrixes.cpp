#include<iostream>
using namespace std;
/*void sum(int a[][],int b[][]);
void c(int c[][]);*/
int main()
{
    int n,m;
    int i,j;
  
    cout<<" enter the no. of rows nd columns in the 1st array "<<endl;
    cin>>n>>m;
      int a[n][m];
    cout<<" enter the elements of the array "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<" the matrix A is "<<endl;
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } cout<<" enter the no. of rows nd columns of the 2nd array "<<endl;
    cin>>n>>m;
      int b[n][m];
    cout<<" enter the elements of the array "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<" the matrix B is "<<endl;
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<b[i][j]<<" ";
        }
       cout<<endl;
    }
    int c[n][m];
     
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<" the sum of the 2 given matrixes are "<<endl;
 for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<c[i][j]<<" ";
        }
       cout<<endl;
    }
}
       /* sum(a,b);
        c(c);
    }
}
    void sum(int a[][],int b[][])
    {
      int c[n][m];
        for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
              c[i][j]=a[i][j]+b[i][j];
        }

    }void c(int c[][])
    {
    cout<<" the sum of matrixes are "<<endl;
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }*/
