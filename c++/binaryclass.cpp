#include <iostream>
using namespace std;
class binary
{
private:
    string s[40];

public:
    void read(void);
    void check(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << " incorrect binary format " << endl;
            }else
            cout<<" correct binary format";
            exit(1);
        }
    }
};
void binary ::read(void)
{
    cout << " enter the string " << endl;
    cin >> s[40];
}
int main()
{
    binary number;
    number.read();
    number.check();
}