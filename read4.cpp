#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int i=0, marks, mark, regist;
string name, nam;
class Data
{
  string nam;
  int mark;
  void data (int);
};

void Data::data (int p)
	    {nam = name;
	      mark = marks;
	    }

  int main ()
  { int regno;
   string line, name;
  ifstream myfile("eg3.txt");
  if (myfile.is_open())
    {
      while (getline (myfile,line))
        { Data regisno[10];
	  stringstream(line) >> regno >> name >> marks;
	  regisno[i] = regno
          void Data::data ( int regisno[i]);
	  i++;
        }
      myfile.close();
    }
  
  else cout << "unable to open file" << '\n';

string mystr;
getline (cin, mystr);
stringstream(mystr) >> regist;

 for (i=0; i<10; i++)
  {if (regist = regisno[i])
      {cout << nam.regisno << '\n';
	cout << mark.regisno << '\n';
      }
  }
  }




