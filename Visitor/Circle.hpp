#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"
#include "Visitor.hpp"

class Circle : public Shape {
  private:
    double radius_;

  public:
    Circle(double radius);
    void Accept(Visitor *visitor) const override;
    double GetRadius() const;
};

#endif // CIRCLE_HPP
