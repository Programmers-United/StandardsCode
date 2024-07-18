#include "AreaCalculator.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include <iostream>
#include <cmath>

void AreaCalculator::VisitCircle(const Circle *element) const {
  const double PI = acos(-1);
  double area = PI * std::pow(element->GetRadius(), 2);
  std::cout << "Area of Circle: " << area << std::endl;
}

void AreaCalculator::VisitRectangle(const Rectangle *element) const {
  double area = element->GetWidth() * element->GetHeight();
  std::cout << "Area of Rectangle: " << area << std::endl;
}
