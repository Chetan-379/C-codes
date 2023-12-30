#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

string mystr;
int myint1, myint2;
class Data
{public:
  string name;
  int marks;
  int regno;
  void fill ();
};

void Data::fill()
{name = mystr;
  marks = myint1;
  regno = myint2;
}

int main()
{ int regisno;
  string mystr1;
  int i=0;
  Data regist[100];
  ifstream myfile("eg3.txt");
  if (myfile.is_open())
    { string line;
      while (getline (myfile,line))
	{
	  stringstream(line) >> myint2 >> mystr >> myint1;
	  regist[i].fill();
	  i++;
	}
    }
  else cout << "unable to open file" << '\n';

  cout << "Enter Registration No: ";
  getline (cin, mystr1);
  stringstream(mystr1) >> regisno;
  for(i=0; i<10; i++)
    {if (regisno == regist[i].regno)
	{cout << "Name of the Student is: " << regist[i].name << '\n';
	 cout << "Marks obtained is: " << regist[i].marks << '\n';
	 regisno = 1;
	}
    }
  if (regisno != 1) cout << "Invalid Registration No!" << '\n';
}
    
