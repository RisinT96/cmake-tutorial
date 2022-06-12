// A simple program that computes the square root of a number
#include <cmath>
#include <iostream>
#include <string>

#include "config.h"

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
  const double outputValue = sqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;
  return 0;
}
