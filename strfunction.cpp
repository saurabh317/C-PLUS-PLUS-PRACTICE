#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[50];
    char s2[60];
    cout<<" enter the 1st string "<<endl;
    gets(s1);
    puts(s1);
    cout<<" enter the 2nd string "<<endl;
    gets(s2);
    puts(s2);
    cout<<strcmp(s1,s2)<<endl;
    puts(strrev(s1));

}