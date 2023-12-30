 // to show type deduction
#include <iostream>
using namespace std;

int main () 
{int foo = 0;
auto bar = foo;
 cout << "type of bar is: "<< typeid(bar).name() << endl; 

 return 0;

}
