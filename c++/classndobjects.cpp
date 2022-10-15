#include<iostream>
 using namespace std;
class dukan
{
private:
    int p;
    int x[40];       //price
    int idno[40];  //id no.
    string name[40]; //name of the item.

public:
    void setdata(void);
    void getdata(void);
};
void dukan::setdata(void)
{
    cout << " enter the total no. of items " << endl;
    cin >> p;
   int i = 0;
    do
    {
        cout << " enter the id no.of the "<<(i+1)<<" item " << endl;
        cin >> idno[i];
        cout << " enter the name of the "<<(i+1)<<" item " << endl;
        cin >> name[i];
        cout << " enter the price of the " <<(i+1)<<" item " << endl;
        cin >> x[i];
        i++;
    } while (i < p);
}
void dukan::getdata(void)
{
    for (int i = 0; i < p; i++)
    {
        cout << " ...................... " << endl;
        cout << idno[i] << "---" << name[i] << "---"
             << "Rs." << x[i] << endl;
    }
}
int main()
{
   class dukan sabji;
    sabji.setdata();
    sabji.getdata();
    return 0;
}