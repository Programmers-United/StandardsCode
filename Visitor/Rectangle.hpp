#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"
#include "Visitor.hpp"

class Rectangle : public Shape {
  private:
    double width_;
    double height_;

  public:
    Rectangle(double width, double height);
    void Accept(Visitor *visitor) const override;
    double GetWidth() const;
    double GetHeight() const;
};

#endif // RECTANGLE_HPP
