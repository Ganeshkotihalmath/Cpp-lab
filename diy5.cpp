#include <iostream>
#include<string>
using namespace std;
int main()
{
    string firstname,lastname,fullname;
    int totallength;
    cout<<"Enter firstname:";
    cin>>firstname;
    cout<<"Enter lastname:";
    cin>>lastname;
    fullname=firstname+""+lastname;
    totallength=fullname.length();
    char initial=firstname[0];
    cout<<"\n Badge Name:"<<fullname<<"\n";
    cout<<"Total letters:"<<totallength<<"\n";
    cout<<"Initial:"<<initial<<"\n";
    return 0;
}