#ifndef AREACALCULATOR_HPP
#define AREACALCULATOR_HPP

#include "Visitor.hpp"

class AreaCalculator : public Visitor {
  public:
    void VisitCircle(const Circle *element) const override;
    void VisitRectangle(const Rectangle *element) const override;
};

#endif // AREACALCULATOR_HPP
