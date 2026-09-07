 #include<iostream>
using namespace std;
    void upgrade(string &s){
        s+="(verified)";
    }
    int main(){
        string s="coding";
        upgrade(s);
        cout<<s<<endl;
        return 0;
    }
