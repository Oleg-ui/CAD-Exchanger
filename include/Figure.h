#ifndef _Figure_HeaderFile
#define _Figure_HeaderFile
#define _USE_MATH_DEFINES
#include <cmath>

class Figure {
 public:
  Figure() {}
  virtual double GetArea() const  = 0;
  virtual int GetType() const  = 0;
  virtual ~Figure(){}
};

#endif  // _Figure_HeaderFile