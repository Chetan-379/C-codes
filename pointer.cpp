// first pointer
#include <iostream>
using namespace std;

int main()
{int firstvalue, secondvalue = 100;
  int * mypointer;

  mypointer = &firstvalue;
  *mypointer = 20;
  mypointer = &secondvalue;
  *mypointer = 50;

  cout << firstvalue << endl;
  cout << secondvalue << endl;
  
  
}
