// to show the difference between ++i & i++
#include <iostream>
using namespace std;

void extra ()
{int x=10, y; 
  cout << "x++: " << x++ << '\n';     // x++: 10
  y=x;                                
  cout << "y: " << y << '\n';         // y=11
}

int main ()
  {int x=10, y;
  cout << "++x: " << ++x <<'\n';      // ++x: 11
  y=x;                                  
  cout << "y: " << y << '\n';         // y=11
  extra(); 
  return 0;
}


  

