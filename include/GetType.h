#ifndef _GetType_HeaderFile
#define _GetType_HeaderFile
#include <string>
#include <Circle.h>
#include <Ellipse.h>

class GetType : public Visitor {
 public:
  std::string type;

  void visit(Circle &ref) override;
  void visit(Ellipse &ref) override;
};

#endif  // _GetType_HeaderFile