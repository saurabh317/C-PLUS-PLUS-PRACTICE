#include<iostream>
#include<string>
using namespace std;
struct book
{
    char str[40];
    char name[40]="geeta";

};
int main()
{
    book s1;
    char name[40]="geeta";
    //struct book s2;
    cout<<" enter the name of the book u r searching "<<endl;
    gets(s1.str);
    cout<<strcmp(str,name)<<endl;

}