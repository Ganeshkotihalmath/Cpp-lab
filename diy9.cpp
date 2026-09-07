#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a sentence:";
    getline(cin,s);
    cout<<"Total characters:"<<s.length()<<endl;
    cout<<"First character:"<<s[0]<<endl;
    cout<<"Last character:"<<s[s.length()-1]<<endl;
    return 0;
}