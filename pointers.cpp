#include <iostream>
using namespace std;
int main()
{
  int p = 20;

  // Initialize

  int *a;
  // Declare pointers variables
  a = &p;
  // Dereference pointers
  cout << *a;
  return 0;
}