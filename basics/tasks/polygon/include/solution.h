#pragma once

class Polygon{
    public:
    virtual double getArea()=0;
};
class Rectangle: public Polygon{
  double a,b;
  public:
  Rectangle(double n1, double n2){
    a=n1;
    b=n2;
  }
  double getArea(){
    return a*b;
  }
};
class RightTriangle: public Polygon{
  double a,b;
  public:
  RightTriangle(double n1,double n2){
    a=n1;
    b=n2;
  }
  double getArea(){
    return a*b*0.5;
  }
};
