#ifndef _Circle_HeaderFile
#define _Circle_HeaderFile

#include "Figure.h"

class Circle : public Figure {
 protected:
  double rad;

 public:
  Circle();

  Circle(const double length);

  double GetArea() const  override;

  int GetType() const  override;
};

#endif  // _Circle_HeaderFile