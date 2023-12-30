#include <iostream>
using namespace std;

int main()
{int numbers[5];
  int * p;
  int i;
  p = numbers; *p = 10;
  p++ ; *p = 20;

  cout << "without giving values to all numbers" << endl;
  for (i=0; i<5; i++)
    { cout << numbers[i] << ", ";
    }
  cout << "\n\n";
	
  p = numbers + 2 ; *p = 30;
  p = numbers; *(p+3) = 40;
  p = &numbers[4] ; *p = 50;
  
  cout << "printing values with numbers[i]" << endl;
  for (i=0; i<5; i++)
    {cout << numbers[i] << ", ";
    }
  cout << "\n\n";

  cout << "printing values with *(p+i): " << endl;
  for (i = 0; i < 5 ; i++)
    { p = numbers;
      cout << *(p+i) << ", ";
    }

  cout << "\n\n";

  cout << "printing the address of numbers[i] with p:" << endl;
  for (i=0 ; i<5 ; i++)
    { p = numbers;
      cout << p << ", ";
    }

  cout << '\n';
}
