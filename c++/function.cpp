#include<iostream>
using namespace std;
int array(int a[],int n,int key)
{
    int x=1;
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        {
        x=-1;
        }

        }
         if(x==-1)
            {
                cout<<" search found "<<endl;
            }
            else
            cout<<"search not found\n";
            return 0;
        
}
int main()
{
    int i=0,n;
    cout<<" enter the size of the array "<<endl;
    cin>>n;
    int a[n];
    cout<<" enter the elements the array "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<" enter the key element\n";
    cin>>key;
    cout<<array(a,n,key)<<endl;

}