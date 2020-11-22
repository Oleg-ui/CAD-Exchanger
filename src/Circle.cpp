#include "Circle.h"

Circle::Circle() : rad(0.0) {};

Circle::Circle(const double length) 
{
  if (length < 0) 
  {
    throw "Error: rad < 0";
  }
  rad = length;
}

double Circle::GetArea() const
{
  return M_PI * rad * rad;
}

void Circle::accept(Visitor& v)
{
  v.visit(*this);
}