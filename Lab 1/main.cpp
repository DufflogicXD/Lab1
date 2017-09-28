#include <iostream>

using namespace std;

// Base class
class Shape
{
public:
   // pure virtual function providing interface framework.
   virtual float getArea() = 0;
   void setWidth(float w)
   {
      width = w;
   }
   void setHeight(float h)
   {
      height = h;
   }
protected:
   float width;
   float height;
};

class Triangle: public Shape
{
public:
   float getArea()
   {
      return (width * height)/2;
   }
};

int main(void)
{
    Triangle  Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);
    // Print the area of the object.
    cout << "Total Triangle area: " << Tri.getArea() << endl;

    return 0;
}
