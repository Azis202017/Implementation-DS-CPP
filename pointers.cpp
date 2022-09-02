#include <iostream>
// Use this library to get a heap memory
#include <stdlib.h>
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
  // To access heap memory use malloc() function
  int *heap;
  // heap memory is “Heap” memory, also known as “dynamic” memory, is an alternative to local stack memory. Local memory is quite automatic. Local variables are allocated automatically when a function is called, and they are deallocated automatically when the function exits. Heap memory is different in every way.
  heap = (int *)malloc(2 * sizeof(int));


  
  return 0;
}