#include<iostream>
using namespace std;
int main()
{
 int a,b;
 cout<<"Enter value foe a:";cin>>a;
 cout<<"Enter value for b:";cin>>b;
 a=a+b;
 b=a-b;
 a=a-b;
 cout<<"After swapping:\n";
 cout<<"a="<<a<<"\nb="<<b<<"\n";
 return 0;
}