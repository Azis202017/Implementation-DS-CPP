#include <iostream> 
using namespace std;

struct Rectangle
{
  int breadth;
  int length;
};
int main()
{
  Rectangle rectangle = Rectangle();
  rectangle.breadth = 20;
  rectangle.length = 50;
  cout << "Breadth: " << rectangle.breadth << endl;

  return 0;
}