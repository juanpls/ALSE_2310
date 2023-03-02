#include <iostream>
#include <math.h>
using namespace std;

class Complejo{
  double re,im;

public:
  double   getRe();
  bool     setRe( double r );
  double   getIm();
  bool     setIm( double i );
  double   distancia( const Complejo &b );
  Complejo operator+(Complejo &a);
  Complejo operator-(Complejo &a);
  Complejo operator*(Complejo &a);
  Complejo conjugado();
  Complejo inverso();
  friend   ostream& operator<< (ostream& out, Complejo &a);
};

