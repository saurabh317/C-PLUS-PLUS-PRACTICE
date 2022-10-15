#include<iostream>
using namespace std;
class binary
{
    private:
    string s;
    public:
    void showdata(void);
    void getdata(void)
    {
        cout<<" enter the string "<<endl;
        cin>>s;
    }

};
void binary ::showdata(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i) =='0' && s.at(i) =='1')
        {
            cout<<" binary number "<<endl;
        }
        else{
           cout<<" not a binary no. "<<endl;
           exit(0);
        }
    }
}
int main()
{
    binary number;
    number.getdata();
    number.showdata();
    return 0;
}