#include "Ellipse.h"

Ellipse::Ellipse() : a(0.0), b(0.0) {};

Ellipse::Ellipse(const double _a, const double _b)
{
  if (_a < 0 || _b < 0) {
    throw "Error: a or b < 0";
  }
  a = _a;
  b = _b;
}

double Ellipse::GetArea() const 
{ 
  return M_PI * a * b;
}

int Ellipse::GetType() const
{
  return 2;
}