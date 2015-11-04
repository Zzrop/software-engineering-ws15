#ifndef CURRENCYCONVERTER_HPP
#define CURRENCYCONVERTER_HPP

#include "unitconverter.hpp"

class CurrencyConverter : public UnitConverter{

  public:
    CurrencyConverter();
    virtual double convert(double input) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;

};

#endif
