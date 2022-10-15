#include<iostream>
using namespace std;
int main()
{
    float per[5];
    int i;
    for(i=1;i<=5;i++)
{ 
    cout<<"enter the percentage of students "<<i<<endl;
    cin>>per[i];
}
for(i=1;i<=5;i++)
{
     per[i]=per[i]+10;
    cout<<"the increased percentage (by grace marking) of student is "<<per[i]<<endl;

}
}