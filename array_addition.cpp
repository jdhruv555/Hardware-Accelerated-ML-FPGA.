// File: array_addition.cpp

#include "array_addition.h"

void array_addition(int *a, int *b, int *result, int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = a[i] + b[i];
    }
}
