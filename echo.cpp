// echo using do while loop
#include <iostream>
#include <string>
using namespace std;
int main ()
{string str;
  do {
    cout << "Enter Text: ";
    getline(cin,str);
    cout << "You Entered: " << str << endl;
  }
  while (str !="goodbye!");
  }
