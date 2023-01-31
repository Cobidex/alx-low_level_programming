#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__
#include <stdio.h>
#include <math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int _search(int *array, int left, int right, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int inter_search(int *array, size_t size, int left, int right, int value);
#endif
