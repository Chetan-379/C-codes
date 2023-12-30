#include <iostream>
using namespace std;

int main ()
{union mix_t {
  int l;
  struct {
    int hi;
    short lo;
    } s;
  char c[4];
} mix;
}
