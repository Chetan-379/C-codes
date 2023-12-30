// to display the datatype of character literal constant
#include <iostream>
using namespace std;

int main ()

{ auto i="chetan";
  cout << "type is: " << typeid(i).name() << endl;
  
}
