#ifndef VISITOR_HPP
#define VISITOR_HPP

class Circle;
class Rectangle;

class Visitor {
  public:
    virtual void VisitCircle(const Circle *element) const = 0;
    virtual void VisitRectangle(const Rectangle *element) const = 0;
};

#endif // VISITOR_HPP
