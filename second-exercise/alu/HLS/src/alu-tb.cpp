/*
 * Copyright 2023
 * MIT License
 * Author: Luis G. Leon-Vega
 */

#include "alu.hpp"

/**
 * @example alu-tb.cpp
 * This is an example of a testbench source
 */

/* You can use any HLS library here such as ap_fixed.h and ap_int.h */

#include <iostream>

int main(int, char **) {
  constexpr int kIters = 1000;
  int ret = 0;

  DataType a{0}, b{0}, c{0};
  OpType op{0};

  a = DataType{0.2}, b = DataType{0.3};

  /* Test ADD */
  op = ADD;
  alu_top(a, b, c, op);
  ret |= (c != (a + b));

  /* Test MULT */
  op = MULT;
  alu_top(a, b, c, op);
  ret |= (c != DataType{a * b});

  /* Test Shifting */
  b.range(DataType::width - 1, 0) = 1;
  op = SHIFT_R;
  alu_top(a, b, c, op);
  ret |= (c != DataType{a >> 1});

  /* Add the missing tests */
  return ret;
}
