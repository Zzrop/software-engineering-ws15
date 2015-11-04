#ifndef LENGTHCONVERTER_HPP
#define LENGTHCONVERTER_HPP

#include "unitconverter.hpp"

class LengthConverter : public UnitConverter{

  public:
    LengthConverter();
    virtual double convert(double input) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;

};

#endif
