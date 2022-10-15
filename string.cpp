#include<iostream>
using namespace std;
void print(char str[])
{
  for(int i=0;i!=8;i++)
   //while(str[i]!='\0')
    {
        cout<<str[i];
    }
}
int main()
{
    char str[]={ 's','a','u','r','a','b','h','\0'};
    print(str);
}