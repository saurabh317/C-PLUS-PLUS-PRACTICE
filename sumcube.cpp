#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"enter the no. of terms";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
            sum=sum+(i*i*i);

        }
    }
    cout<<"sum="<<sum<<endl;
}