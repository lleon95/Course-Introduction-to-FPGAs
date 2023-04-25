/*
 * Copyright 2023
 * MIT License
 * Author: Luis G. Leon-Vega
 */

#include "alu.hpp"

#include <ap_fixed.h>

/**
 * @example alu.cpp
 * This is an example of a core file (top function)
 */

/* You can use any HLS library here such as ap_fixed.h and ap_int.h */

void alu_top(const DataType a, const DataType b, DataType& c,
             const OpType opcode) {
  switch (opcode) {
    case ADD:
      adder(a, b, c);
      break;
    case MULT:
      mult(a, b, c);
      break;
    case SHIFT_R:
      shift_right(a, b, c);
      break;
    default:
      c = DataType{-1};
      break;
  }
}
