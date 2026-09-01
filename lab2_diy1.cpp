#include <iostream>
using namespace std;


double volume(double side)
{
    return side * side * side;
}


double volume(double length, double width, double height)
{
    return length * width * height;
}


double volume(double radius, double height)
{
    return 3.14 * radius * radius * height;
}

int main()
{
    cout << "Volume of Cube = " << volume(5.0) << endl;

    cout << "Volume of Cuboid = " << volume(4.0, 5.0, 6.0) << endl;

    cout << "Volume of Cylinder = " << volume(3.0, 7.0) << endl;

    return 0;
}
