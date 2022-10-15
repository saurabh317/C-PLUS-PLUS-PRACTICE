#include<iostream>
using namespace std;
int main()
{
    int n,fact,i,j;
    float sum=0;
    cout<<"enter the no. of terms";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*i;
        }
        sum=sum+(float)1/fact;
        }
        cout<<"sum="<<sum<<endl;

    }

