#include <iostream>
using namespace std;

class circle
{double radius;
public:
  circle (double r)
  {radius = r;}
  double circum()
  {return 2*3.14*radius;}
};

int main()
{circle foo (10.0);
  circle bar = 20.8;
  circle buz {30.6};
  cout << "circumference of circle foo is: " << foo.circum() << '\n';
  
}
