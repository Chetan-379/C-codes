//derived classes
#include <iostream>
using namespace std;

class Polygon
{protected:
  int width;
  int height;
public:
  void Set_values (int a, int b)
  {width = a;
    height = b;
  }
};

class Rectangle: public Polygon
  {public:
    int area()
    {return width * height;}
  };

class Triangle: public Polygon
{public:
  int area()
  {return width * height/2;}
};

int main ()
{Rectangle rctngl;
  Triangle trngl;
  rctngl.Set_values (4,5);
  trngl.Set_values (4,5);
  cout << rctngl.area() << '\n';
  cout << trngl.area() << '\n';
}
