#include <iostream>
#include <string>
using namespace std;

int main()
{ char q1[] = "what is your name?";
  string q2 = "where are you from?";
  char a1[80];
  string a2;

  cout << q1 << endl;
  cin >> a1;

  cout << q2 << endl;
  cin >> a2; 

  cout << "Hi " << a1 << " from " << a2 << "!" << endl;
  
}
