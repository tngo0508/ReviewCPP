#include <iostream>
void DoIt(int &foo, int goo);

int main() {
  int *foo, *goo;
  foo = new int;
  *foo = 1;
  goo = new int;
  *goo = 3;
  *foo = *goo + 3;
  foo = goo;
  *goo = 5;
  *foo = *goo + *foo;
  DoIt(*foo, *goo);
  std::cout << (*foo) << std::endl;
}

void DoIt(int &foo, int goo) {
  foo = goo + 3;
  goo = foo + 4;
  foo = goo + 3;
  goo = foo;
}