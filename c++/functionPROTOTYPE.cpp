#include<iostream>
#include<math.h>
using namespace std;
//function prototype:
//void exitprogram();
void equalroots(float,float);
void unequalroots(float,float,float);

//main function:
void equalroots(float a,float b)
{
    float root;
    root=(-b/(2*a));
    cout<<endl<<" the quadratic equation has equal roots";
    cout<<endl<<" the only root is "<<root;
}
void unequalroots(float a,float b,float D)
{
    float root1,root2;
    root1=(-b+sqrt(D))/(2*a);
    root2=(-b-sqrt(D))/(2*a);
    cout<<endl<<" the quadratic equation has unequal roots";
    cout<<endl<<" rootrs are "<<root1<<root2;
}
int main()
{
    float D,a,b,c;
    cout<<"enter the coefficients of the equation "<<endl;     
    cin>>a>>b>>c;

D=(b
*b)-4*a*c;
if(D<0)
{
    cout<<"\n the equation has the unreal roots";
    //exitprogram();
}
else if(D>0)
{
    unequalroots(a,b,D);
    //exitprogram();
}
else if(D==0)
{
    equalroots(a,b);
    //exitprogram();
}
}
