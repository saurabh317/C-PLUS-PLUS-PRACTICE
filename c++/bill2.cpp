#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the total amount of water used" << endl;
    cin >> a;
    int bill = 0;
    int x = 1;
    for (x = 1; x <= a; x++)
    {

        if (x <= 100)
        {
            bill = bill + 14;
        }
        else if ((x > 100)&&(x < 200))
        {
            bill = bill +15;
        }
         else if (x > 200)
        {
            bill = bill +16;
        }
        
    }
    cout<<"ur bill="<<bill<<endl;
}