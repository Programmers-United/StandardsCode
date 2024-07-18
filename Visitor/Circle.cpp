#include "Circle.hpp"

Circle::Circle(double radius) : radius_(radius) {}

void Circle::Accept(Visitor *visitor) const {
  visitor->VisitCircle(this);
}

double Circle::GetRadius() const {
  return radius_;
}
