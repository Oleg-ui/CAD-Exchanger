#ifndef _Ellipse_HeaderFile
#define _Ellipse_HeaderFile

#include "Figure.h"

class Ellipse : public Figure {
 protected:
  double a;
  double b;

 public:
  Ellipse();

  Ellipse(const double _a, const double _b);

  virtual double GetArea() const  override;

  void accept(Visitor& v) override;
};

#endif  // _Ellipse_HeaderFile