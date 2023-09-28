#include <iostream>
using namespace std;
class Shape {
protected:
  float height;
  float width;
public:
  Shape(float height, float width) {
    this->height = height;
    this->width = width;
  }
  virtual float area() = 0;
  virtual float perimeter() = 0;
};
class Rectangle : public Shape {
public:
  Rectangle(float height, float width) : Shape(height, width) {}
  float area() override {
    return height * width;
  }
  float perimeter() override {
    return 2 * (height + width);
  }
};
class Triangle : public Shape {
public:
  Triangle(float height, float width) : Shape(height, width) {}
  float area() override {
    return 0.5 * height * width;
  }
  float perimeter() override {
    return height + width + width;
  }
};
int main() {
  Rectangle rectangle(10, 5);
  Triangle triangle(10, 5);
  cout << "Rectangle area: " << rectangle.area() << endl;
  cout << "Rectangle perimeter: " << rectangle.perimeter() << endl;
  cout << "Triangle area: " << triangle.area() << endl;
  cout << "Triangle perimeter: " << triangle.perimeter() << endl;
}
