// to check variable is of float or int literal without explitcit declaration
#include<iostream>
using namespace std;
int main()
{auto i=12L;
  cout << "literal cont. type: " << typeid(i).name() << endl;;
}
