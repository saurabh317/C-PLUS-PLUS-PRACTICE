#include<iostream>
using namespace std;
int fab(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
   // fab(n)=fab(n-1)+fab(n-2);
    return fab(n-1)+fab(n-2);
}
int main()
{
    int n;
    cout<<"enter the no. of terms "<<endl;