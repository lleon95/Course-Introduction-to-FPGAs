/*
 * Copyright 2023
 * MIT License
 * Author: Luis G. Leon-Vega
 */

#include "alu.hpp"

#include <ap_fixed.h>
#include <ap_int.h>

/**
 * @example alu-hw.cpp
 * This is an example of a hardware file (subunits)
 */

/* You can use any HLS library here such as ap_fixed.h and ap_int.h */
/* The pragma HLS INLINE makes the unit a module */

void adder(const DataType a, const DataType b, DataType& c) {
#pragma HLS INLINE OFF
  c = a + b;
}

void mult(const DataType a, const DataType b, DataType& c) {
#pragma HLS INLINE OFF
  c = a * b; /* FIXME: This is not correct! Fix it */
  /* Hint: Use the MSBs */
}

void shift_right(const DataType a, const DataType b, DataType& c) {
#pragma HLS INLINE OFF
  /* Convert to int */
  ap_uint<DataType::width> shifts = b.range(DataType::width - 1, 0);

  c = a >> shifts;
}
