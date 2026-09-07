#include <iostream>
using namespace std;
int main(){
    double x,y;
    cout<<"Enter coordinates\n";
    cin>>x>>y;
    if(x==0||y==0){
        cout<<"On axis";
    }
    else if(x>0 && y>0)
    cout<<"Quadrant 1";
    else if(x<0 && y>0)
    cout<<"Quadrant 2";
    else if(x<0 && y<0)
    cout<<"Quadrant 3";
    else if(x>0 && y<0)
    cout<<"Quadrant 4";
    return 0;
}