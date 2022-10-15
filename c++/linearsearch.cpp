#include<iostream>
#include<time.h>
using namespace std;
int main()
{
   int n,x=1;
   double time_taken;
    clock_t st,et;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
     cout<<" enter the elements of the array "<<endl;
    for(int i=1;i<=n;i++)
    {
       
        cin>>a[i];
    }
    int key;
    cout<<" enter the key element to be searched "<<endl;
    cin>>key;
      st=clock();
    for(int i=1;i<=n;i++)
    {
       
        if(key==a[i])
        {
        x=-1;
        }
        
        }
        if(x==-1)
        {
            cout<<"search found\n";
        }
        else 
        cout<<"search not found";
         et=clock();
    time_taken=((et-st)/(CLOCKS_PER_SEC*1000));
    cout<<" time taken "<<time_taken<<endl;
    return 0;
    
}


