#ifndef PERIMETERCALCULATOR_HPP
#define PERIMETERCALCULATOR_HPP

#include "Visitor.hpp"

class PerimeterCalculator : public Visitor {
  public:
    void VisitCircle(const Circle *element) const override;
    void VisitRectangle(const Rectangle *element) const override;
};

#endif // PERIMETERCALCULATOR_HPP
