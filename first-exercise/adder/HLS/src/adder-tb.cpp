/*
 * Copyright 2023
 * MIT License
 * Author: Luis G. Leon-Vega
 */

#include "adder.hpp"

/**
 * @example adder-tb.cpp
 * This is an example of a testbench source
 */

/* You can use any HLS library here such as ap_fixed.h and ap_int.h */

#include <iostream>

int main(int, char **) {
  constexpr int kIters = 1000;

  DataType a{0}, b{0}, c{0};

  for (int i = 0; i < kIters; ++i) {
    a += DataType{0.001};
    b += i % 5 ? DataType{0} : DataType{0.001};
    adder_top(a, b, c);
    std::cout << a << " + " << b << " = " << c << std::endl;
  }

  return 0;
}
