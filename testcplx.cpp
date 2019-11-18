#include <iostream>
using namespace std;
#include "complex.h"


int main()
{
  Complex a(0.0,15),b(0,13),c;
  Complex r1(7.1,5.1);
  Complex r2(8.1,-3.1);
  double p;
  c = 10;
  cout << c <<endl;
  c = -a;
  cout << c <<endl;
  c = a + b;
  c = c - Complex(10);
  cout << c <<endl;
  c = 10 - a;
  (c -=b) -=10;
  cout << c <<endl;
  c = r1 / r2;
  cout << c << endl;
  r1 /= r2;
  cout << r1 << endl;
  p = r1.abs();
  cout << p << endl;
  p= r1.phase();
  cout << p << endl;
  c = r1.conj();
  cout << c << endl;
}
