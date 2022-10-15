#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the total amount of water used"<<endl;
    cin>>a;
    int x=1;
    int bill=0;
    while(x<=a)
    {
     if(x<=100)
      bill+=14;
     if((x>100)&&(x<200))
     bill+=15;
     if(x>200)
     bill+=16;
     x++;
    }
    cout<<"the bill is "<<bill;
}