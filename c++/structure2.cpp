#include<iostream>
using namespace std;
struct student
{
    int x;
    float avg;
    char name[50];

};
int main()
{
   struct student s1;
cout<<" enter the name "<<endl;
gets(s1.name);
cout<<" enter the roll no. "<<endl;
cin>>s1.x;
cout<<" enter the percentage "<<endl;
cin>>s1.avg;
cout<<" name is "<<s1.name<<endl<<" roll no. is "<<s1.x<<endl<<"average is "<<s1.avg; 
}