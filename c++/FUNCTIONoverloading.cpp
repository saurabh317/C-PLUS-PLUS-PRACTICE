#include<iostream>
using namespace std;
float volume(float L)
{
    float v=L*L*L;
    return v;
}
float volume(float L,float b,float h)
{
    float v=L*b*h;
    return v;
}
int main()
{
    float L,b,h;
    cout<<" enter the value of L ,b,h "<<endl;
    cin>>L>>b>>h;
    cout<<" the volume of cube is "<<volume(L)<<endl;
    cout<<" the volume of cuboid is "<<volume(L,b,h)<<endl;
    return 0;

}