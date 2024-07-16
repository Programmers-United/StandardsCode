#include <iostream>
#include <array>
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "AreaCalculator.hpp"
#include "PerimeterCalculator.hpp"

void ClientCode(std::array<const Shape *, 2> shapes, Visitor *visitor) {
  for (const Shape *shape : shapes) {
    shape->Accept(visitor);
  }
}

int main() {
  std::array<const Shape *, 2> shapes = {new Circle(5.0), new Rectangle(3.0, 4.0)};
  
  std::cout << "Calculating area of shapes:\n";
  AreaCalculator *areaCalculator = new AreaCalculator;
  ClientCode(shapes, areaCalculator);
  
  std::cout << "\nCalculating perimeter of shapes:\n";
  PerimeterCalculator *perimeterCalculator = new PerimeterCalculator;
  ClientCode(shapes, perimeterCalculator);

  // Fazendo a limpa
  for (const Shape *shape : shapes) {
    delete shape;
  }
  delete areaCalculator;
  delete perimeterCalculator;

  return 0;
}
