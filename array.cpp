#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks[4]={1,2,3,4};
   // cout<<marks[0]<<endl;
   // cout<<marks[1]<<endl;
   for(int i=0;i<=3;i++)
    {
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
}

int i=0;
while(i<=3)
{
    cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    i++;
}
i=0;
do{
    cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    i++;
}
while(i<=3);
}

