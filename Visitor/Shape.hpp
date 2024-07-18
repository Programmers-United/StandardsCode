#ifndef SHAPE_HPP
#define SHAPE_HPP

class Visitor;

class Shape {
  public:
    virtual ~Shape() {}
    virtual void Accept(Visitor *visitor) const = 0;
};

#endif // SHAPE_HPP
