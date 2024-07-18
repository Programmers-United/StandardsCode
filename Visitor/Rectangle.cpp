#include "Rectangle.hpp"

Rectangle::Rectangle(double width, double height) : width_(width), height_(height) {}

void Rectangle::Accept(Visitor *visitor) const {
  visitor->VisitRectangle(this);
}

double Rectangle::GetWidth() const {
  return width_;
}

double Rectangle::GetHeight() const {
  return height_;
}
