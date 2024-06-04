#pragma once

class Rectangle {
    double w,h;
    public:
    void setWidth(int width){
        w=width;
    }
    void setHeight(int height){
        h=height;
    }
    long double getArea(){
        return (w<=0 || h<=0) ? 0 : w*h;
    }
    int getPerimeter(){
        return (w<=0 || h<=0) ? 0 : 2*(w+h);
    }
};
