#include<iostream>
using namespace std;
typedef union money
{
    int notes;
    char rupee;
    float amount;

}x;
int main()
{
    x aman;
    aman.notes=25;
    aman.rupee='r';
   aman.amount=12340000;
    cout<<aman.notes<<endl;
    cout<<aman.rupee<<endl;
   cout<<aman.amount<<endl;


}