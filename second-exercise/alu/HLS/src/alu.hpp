/*
 * Copyright 2023
 * MIT License
 * Author: Luis G. Leon-Vega
 */

#pragma once

#include <ap_fixed.h>
#include <ap_int.h>

using DataType = ap_fixed<6, 1>;
using OpType = ap_uint<3>;

/**
 * Op codes supported by the ALU
 */
enum OPCODES {
  /** Arithmetic addition */
  ADD = 0x00,
  /** Arithmetic substraction */
  SUB,
  /** Arithmetic multiplication */
  MULT,
  /** Binary shift to the right */
  SHIFT_R,
  /** Binary shift to the left */
  SHIFT_L,
  /** Logical bitwise AND */
  AND,
  /** Logical bitwise OR */
  OR,
  /** Logical bitwise NOT to A */
  NOT_A,
  /** Unsupported */
  LAST_OP
};

/**
 * Top function:
 * This declares the top function that wraps all the accelerator logic.
 * @param a [in]: first param
 * @param b [in]: second param
 * @param c [out]: third param
 * @param opcode [in]: op code param
 */
void alu_top(const DataType a, const DataType b, DataType& c,
             const OpType opcode);

/* ALU Operations */
void adder(const DataType a, const DataType b, DataType& c);
void mult(const DataType a, const DataType b, DataType& c);
void shift_right(const DataType a, const DataType b, DataType& c);
