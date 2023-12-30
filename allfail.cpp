#include <iostream>
using namespace std;

int main()
{int * foo;
foo = new (nothrow) int [5];
 if (foo == nullptr) {cout << "d" << 'n';
  // error assigning memory. Take measures.
}
 else cout << "b" << '\n';

}
