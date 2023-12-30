// member initialisation
#include <iostream>
using namespace std;

class Circle{
  double radius;
  Circle (double r) : radius(r) {}
  double area() {return radius*radius*3.14159265;}
};

class Cylinder{
  Circle base;
  Cylinder(double r, double h) : base(r), height(h) {}
  double volume() {return base.area()*height;}
};

int main ()
{Cylinder foo(10,20);
  cout << "foo's volume is: " << foo.volume() << '\n';
}
  
