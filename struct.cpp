// struct example
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

struct movies_t {
  int year;
  string title;} yours, mine;

void printmovie (movies_t movie);

int main ()
{mine.title = "RRR: Rise Roar Revolt";
  mine.year = 2022;
  string mystr;
  cout << "Enter title: " << '\n';
  getline (cin,yours.title);

  cout << "Enter year: " << '\n';
  getline (cin,mystr);
  stringstream(mystr) >> yours.year;

  cout << "my favourite movie is: ";
  printmovie (mine);
  cout << "And yours is: ";
  printmovie (yours);
  
}

void printmovie (movies_t movie)
{cout << movie.title;
  cout << " (" << movie.year << ")" << '\n';
  
}
