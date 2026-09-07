#include <iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter the amount to withdraw:";
    cin>>amount;
    if(amount<=0){
        cout<<"Error:Amount must be greater than zero.\n";
    }
    else if(amount>10000){
        cout<<"Error:Limit exceeded Maximum withdrawal is 10000.\n";
    }
    else if(amount%500!=0){
        cout<<"Error:Amount must be a multiple of 500.\n";
    }
    else{
        int notes=amount/500;
        cout<<"Dispensing "<<notes<<" note(s) of 500.\n";
    }
    return 0;
}