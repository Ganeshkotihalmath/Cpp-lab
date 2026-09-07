#include<iostream>
using namespace std;
int main(){
    string pass;
    cout<<"Enter the password\n";
    getline(cin,pass);
    if(pass=="password")
    cout<<"Terrible";
    else if(pass.length()<6)
    cout<<"Weak";
    else if(pass.length()>=6 && pass.length()<10)
    cout<<"Medium";
    else if(pass.length()>10)
    cout<<"Strong";
    return 0;
}