#include <iostream>
#include <math.h>
#include "complejo.h"

using namespace std;

bool Complejo::setRe( double r ){ 
  re = r; 
  return true;
}

bool Complejo::setIm( double i ){ 
  im = i; 
  return true;
}

double Complejo::distancia( const Complejo &b ){
    double x = b.re - re;
    double y = b.im - im;
    return sqrt( x * x  + y * y );
  }

Complejo Complejo::operator+(Complejo &a){
    Complejo c;
    c.re = re + a.re;
    c.im = im + a.im;
    return c;
  }

ostream& operator<< (ostream& out, Complejo &a){
    out  << a.re << " + " << a.im << "j";
    return out;
  }
  

double   Complejo::getRe(){
  return re;
}

double    Complejo::getIm(){
  return im;
}

Complejo  Complejo::operator-(Complejo &a){
  Complejo c;
  return c;
}

Complejo  Complejo::operator*(Complejo &a){
  Complejo c;
  return c;
}

Complejo  Complejo::conjugado(){
  Complejo c;
  return c;
}

Complejo  Complejo::inverso(){
  Complejo c;
  return c;
}
