#include <iostream>
using namespace std;
int main()
{
    int totalbill,share,leftover;
    cout <<"Enter total bill amount";
    cin>>totalbill;
    share=totalbill/3;
    leftover=totalbill%3;
    cout<<"Each person pays:"<< share <<"rupees\n";
    cout<<"Leftover change:"<<leftover<<"rupees\n";
    return 0;
}