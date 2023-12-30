//classes
#include <iostream>
using namespace std;

class rectangle
{int height, width;
public:
  void set_value (int, int);
  int area()
  { return height * width;}
};

void rectangle::set_value (int x, int y)
{width = x;
  height = y;
}

int main ()
{ rectangle rect;
  rect.set_value (3,4);
  cout << "the area of rectangle is: " << rect.area() << '\n';
  
}
