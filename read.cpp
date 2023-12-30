#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
int i, p[1000];
int main () {
  int myint, r,j;
  string line;
  ifstream myfile ("example.txt");
    if (myfile.is_open())
      { while ( getline (myfile,line) )
	  {stringstream(line) >> myint;
	   p[i] = myint;
	    cout << p[i] << '\n';
	    i++;  
	  }
	myfile.close();
      }
    else cout << "Unable to open file";

    for (i=0; i<10; i++)
      {r= r + p[i];}
    cout << r;
        
    
}
