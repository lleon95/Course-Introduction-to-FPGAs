/*
 * Copyright 2023
 * MIT License
 * Author: Luis G. Leon-Vega
 */

#include "adder.hpp"

#include <ap_fixed.h>

/**
 * @example adder.cpp
 * This is an example of a core file (top function)
 */

/* You can use any HLS library here such as ap_fixed.h and ap_int.h */

void adder_top(const DataType a, const DataType b, DataType& c) {
  c = a + b;
}
