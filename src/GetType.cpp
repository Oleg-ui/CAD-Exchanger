#include "GetType.h"

void GetType::visit(Circle& ref)
{
  type = "Circle";
}

void GetType::visit(Ellipse& ref)
{
  type = "Ellipse";
}