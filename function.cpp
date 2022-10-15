#include <iostream>
using namespace std;
int sum(int x, int y);
void p(void);
int main()
{
    int a, b;
    cout << "enter the first no." << endl;
    cin >> a;
    cout << "enter the second no." << endl;
    cin >> b;
    cout << "the sum of two no is " << sum(a, b) << endl;
     p();
    return 0;
}
int sum(int x, int y) //syntax of writting function.
{
    int z = x + y;
}
void p()
{
    cout<<endl<<"bahut easy hai khud kr laude";
}
