#include <iostream>
using namespace std;

int main()
{char a;
char * b;
char ** c;
a = 'z';
b = &a;
c = &b;
 cout << "value of b is: "<< *b << '\n';
 cout << "address of b is: " << b << '\n';
 cout << "value of c is: " << **c << '\n';
 cout << "address of c is: " << c << '\n';
}
