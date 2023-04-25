/*
 * Copyright 2023
 * MIT License
 * Author: Luis G. Leon-Vega
 */

#pragma once

#include <ap_fixed.h>

using DataType = ap_fixed<12, 1>;
/**
 * Top function:
 * This declares the top function that wraps all the accelerator logic.
 * @param a [in]: first param
 * @param b [in]: second param
 * @param c [out]: third param
 */
void adder_top(const DataType a, const DataType b, DataType& c);
