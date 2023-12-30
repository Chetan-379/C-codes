#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
int i=0, j=0;
int p[100][100], myint1, myint2;

int main () {
  string line;
  ifstream myfile ("example2.txt");
    if (myfile.is_open())
      { while ( getline (myfile,line) )
	  {stringstream(line) >> myint1 >> myint2;
	  p[i][j] = myint1;
	  p[i][j+1] = myint2;
	  i++;
	  }
	myfile.close();
      }
    else cout << "Unable to open file";

    cout << " (X)|(Y) " << '\n';
    for (i=0; i<10; i++)
      {cout << "  " << p[i][0] << " | " << p[i][1] << '\n';  }
    return 0;    
    
}

