#include <iostream>
using namespace std;
#include "complex.h"


int main()
{
  Complex a(0.0,15),b(0,13),c;
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
  c = a / b;
  cout << c << endl;
  c = /a;
  cout << c << endl;
  p = abs(c);
  cout << p << endl;
  p=phase(c);
  cout << p << endl;
  p = conj(c);
  cout << p << endl;

