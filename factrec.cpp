#include<iostream>
using namespace std;

long fact(long a)
{if (a>1)
    return a*fact(a-1);
  else
    return 1;
}

int main()
{int num;
  cout << "enter any number: ";
  cin >> num;
  cout << num << "!= " << fact (num) << endl;
}
