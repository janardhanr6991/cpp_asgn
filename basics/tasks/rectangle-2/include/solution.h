#pragma once
#include<iostream>

class Rectangle {
    double w, h;
    public:
    Rectangle(int width,int height){
        w=width;
        h=height;
        std::cout<<"Rectangle created with custom dimensions.\n";
    }
    Rectangle(){
        w=1;
        h=1;
        std::cout<<"Rectangle created with default dimensions.\n";
    }
    void setHeight(double height){h=height;}
    void setWidth(double width){w=width;}

    double getArea(){return (h<=0 || w<=0)? 0: h*w;}
    double getPerimeter(){return (h<=0 || w<=0)? 0:2*(h+w);}
    
    void printDimensions() const {
        std::cout<<"Width: "<<w<<", Height: "<<h<<"\n";
    }
    ~Rectangle(){
        std::cout<<"Deleting rectangle.\n";
    }
};
