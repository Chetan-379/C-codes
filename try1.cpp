#include <iostream>
#include <vector>
using namespace std;

int main()
{vector <int*> *a;

  int i; int f[10]={};
 
  *(*a)[i] = f[0];
  for (i=1; i<10; i++)
    {(*a)[i] = &f[i];
      (*a) -> push_back(i);
     cout << f[i] << '\n';
    }
}
