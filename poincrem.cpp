// to show the four different combinations of dereference & increment operator
#include <iostream>
using namespace std;

int main ()
{int num[5] = {1,12,783,324,345};
  int * p;
  p = num;
  cout << "1. p: " << p << " *p: " << *p << '\n' << '\n';
  // 1. p: 0x7ffc866e8460 *p: 1
  
  cout << "2. ++*p: " << ++*p << '\n';
  // 2. ++*p: 2
  cout << "3. p: " << p << " *p: " << *p << '\n' << '\n';
  // 3. p: 0x7ffc866e8460 *p: 2

  cout << "4. *++p: " << *++p << '\n';
  // 4. *++p: 12
  cout << "5. p: " << p << " *p: " << *p << '\n' << '\n';
  // 5. p: 0x7ffc866e8464 *p: 12
 
  cout << "6. *p++: " << *p++ << '\n';
  // 6. *p++: 12
  cout << "7. p: " << p << " *p: " << *p << '\n' << '\n';
  // 7. p: 0x7ffc866e8468 *p: 783
 
  cout << "8. (*p)++: " << (*p)++ << '\n';
  // 8. (*p)++: 783
  cout << "9. p: " << p << " *p: " << *p << '\n' << '\n';
  // 9. p: 0x7ffc866e8468 *p: 784

  cout << "10. 2*(*p)++: " << 2*((*p)++) << '\n';
  // 10. 2*(*p)++: 1568

}
