#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
int p[100][100][100];

int main ()
{ int i=0, j=0, regno, marks;
  string line, name;
  ifstream myfile(" skimmed_ntuple_ZToNuNuJets-HT_600to800_Summer16v3.root
");
  if (myfile.is_open())
    {
      while (getline (myfile,line))
	{
	  cout << line << '\n';
	}
      myfile.close();
    }

  else cout << "unable to open file" << '\n';

 
