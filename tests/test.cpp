#include "tinytest.h"
#include "../celsiustofahrenheitconverter.hpp"
#include "../celsiustokelvinconverter.hpp"

int CelsiusToFahrenheit(){

  CelsiusToFahrenheitConverter converter;

  TINYTEST_EQUAL_EPSILON(32.0,converter.convert(0.0))
  TINYTEST_EQUAL_EPSILON(33.8,converter.convert(1.0))
  TINYTEST_EQUAL_EPSILON(30.2,converter.convert(-1.0))
  return 1;
}

int CelsiusToKelvin(){

  CelsiusToKelvinConverter converter;

  TINYTEST_EQUAL_EPSILON(273.15,converter.convert(0.0))
  TINYTEST_EQUAL_EPSILON(0.0,converter.convert(-273.15))
  TINYTEST_EQUAL_EPSILON(773.15,converter.convert(500.0))
  return 1;
}
