#include <iostream>
using namespace std;

class Shape {
   private:
      float width_;
   public:
      void setWidth(float width){ width_ = width; }
      float getWidth() { return width_; }
      float area() { return width_;}
};
//What is the difference between a public and private subclass?
//This is a subclass
class Rectangle : public Shape { //It is important to link the subclasses to the main class
   private:
      float height_;
   public:
      void setLength(float height,float width) { height_ = height; setWidth(width); }  //Can you do this whith all functions?
      float getHeight() { return height_; }
      float area() { return height_ * getWidth(); }
      float perimeter() { return height_*2 + getWidth()*2; }
};

//Important - subclass
class Circle : public Shape {
    public:
       float area() { return 3.14 * getWidth()*getWidth(); }
       float circumference() { return 2 * 3.14 * getWidth(); }
};

int main()
{
    Shape s;
    Rectangle r;
    Circle c;
    
    s.setWidth(10);
    r.setLength(10, 2);
    c.setWidth(10);
    
    cout<<"Shape area: "<<s.area()<<endl;
    cout<<"Rectangle area: "<<r.area()<<endl;
    cout<<"Circle area: "<<c.area()<<endl;
    
    cout<<"Rectangle perimeter: "<<r.perimeter()<<endl;
    cout<<"Circle circumference: "<<c.circumference()<<endl;
    
}

//Mark with //* 2-4 items that are important
//Mark with //? 2-4 items that are incorrect, unclear or you have questions about.