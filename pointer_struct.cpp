#include <iostream>
using namespace std;
struct Rectangle {
  int length;
  int breadth;
};
int main() {
  struct Rectangle r = {10,5};
  struct Rectangle *p = &r;
  r.length = 15;
  // To access pointers member of struct Rectangle, we can use 
  // (*p).member or p->member without *;
  // p-> member is recommanded!!;
  p->length = 20;
  cout << p->length;
}