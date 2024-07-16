#include "PerimeterCalculator.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include <iostream>
#include <cmath>

void PerimeterCalculator::VisitCircle(const Circle *element) const {
  const double PI = acos(-1);
  double perimeter = 2 * PI * element->GetRadius();
  std::cout << "Perimeter of Circle: " << perimeter << std::endl;
}

void PerimeterCalculator::VisitRectangle(const Rectangle *element) const {
  double perimeter = 2 * (element->GetWidth() + element->GetHeight());
  std::cout << "Perimeter of Rectangle: " << perimeter << std::endl;
}
