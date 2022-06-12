// A simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <string>

#include "config.h"

#if defined(USE_MYMATH)
#include "MathFunctions.h"
#endif

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cout << "Version: " << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << "." << Tutorial_VERSION_PATCH
              << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  // convert input to double
  const double inputValue = std::stod(argv[1]);

  // calculate square root

#if defined(USE_MYMATH)
  const double outputValue = mysqrt(inputValue);
#else
  const double outputValue = sqrt(inputValue);
#endif
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
  return 0;
}
