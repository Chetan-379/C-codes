// pointers as arguments:
#include <iostream>
using namespace std;

void increment_all (int* start, int* stop)
{
  int * current = start;
  while (current != stop) {
    cout << "address of current is: " << current << "\n";
    ++(*current);  // increment value pointed
    ++current;     // increment pointer
  }
  cout << '\n';
  cout << "now printing the incremented values: " << '\n';
}
void print_all ( int* start, int* stop)
{
   int * current = start;
  while (current != stop) {
    cout << *current << '\n';
    cout << "address of this number is: " << current << "\n\n";
    ++current;     // increment pointer
  }
}

int main ()
{
  int numbers[] = {10,20,30};
  increment_all (numbers,numbers+3);
  print_all (numbers,numbers+3);
  return 0;
}
