//some elaboration on pointers
#include <iostream>
using namespace std;

int main()
{int *p1, *p2;
  int firstvalue = 5, secondvalue = 15;

  p1 = &firstvalue;
  p2 = &secondvalue;

  *p1 = 20;
   p1 = p2;
  *p1 = 100;

  cout << "firstvalue is: " << firstvalue << endl;
  cout << "secondvalue is: " << secondvalue << endl;
  
}
