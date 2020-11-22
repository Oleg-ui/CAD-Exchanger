#ifndef _Visitor_HeaderFile
#define _Visitor_HeaderFile
class Circle;
class Ellipse;
#include <string>

class Visitor {
 public:
  virtual void visit(Circle &ref) = 0;
  virtual void visit(Ellipse &ref) = 0;

  virtual ~Visitor() {}
};

#endif  // _Visitor_HeaderFile