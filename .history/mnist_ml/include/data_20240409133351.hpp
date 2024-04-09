// container class to hold each line item with and feature vector and enum label

#ifndef __DATA_H // whether a macro is defined or not
#define __DATA_H

#include <vector>
#include "stdint.h"
#include "stdio.h"

class data 
{
  std::vector<uint8_t> * feature_vector; // no class at the end
  uint8_t label; // created the label
  int enum_label; // enum lets a variable be a set of predefined constants, A -> 1, B-> 2
};