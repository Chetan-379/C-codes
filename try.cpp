#include <iostream>
#include <vector>
using namespace std;

int main()
{vector <int> *a;
  cout << "chetan" << '\n';

  int i = 0; int f[10] = {};
  cout << i << '\n';
  
  cout << i << "," << f << '\n';
  
  (*a)[0] = 10;
  cout << (*a[0]) << '\n';
  (*a)[i]=f[0];
  
  for (i=1; i<10; i++)
    {
      
      a -> push_back(i);
      //f[i] = (*a)[i];
      bool Debug = false;
      if(Debug) cout <<"i" << '\n';
      cout << f[i] << ' ';
    }
}
