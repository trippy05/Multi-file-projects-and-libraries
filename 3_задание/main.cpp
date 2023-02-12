#include <iostream>
#include "half.h"
using namespace std;
int main() {
  Triangle f1(10, 20, 30, 50, 60, 70);
  rightTriangle f2(10, 20, 30, 50, 60, 90);
  isoscelesTriangle f3(20, 30, 60, 70);
  equilateralTriangle f4(10, 50);
  Quadrilateral f5(10, 20, 30, 40, 50, 60, 70, 80);
  Parallelogram f6(10, 20, 50, 60);
  Phombus f7(10, 50, 60);
  Rectangle f8(10, 20, 90, 90);
  Square f9(10, 90);
  printdata(&f1);
  printdata(&f2);
  printdata(&f3);
  printdata(&f4);
  printdata(&f5);
  printdata(&f6);
  printdata(&f7);
  printdata(&f8);
  printdata(&f9);

}