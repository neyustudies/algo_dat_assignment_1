#include "quicksort.hpp"
#include <algorithm>
#include <iostream>


int Quicksort::split(std::vector<int>& v, int first, int last) const {
  int pivot = (first + last) / 2;
  std::swap(v[pivot], v[last]);
  int i = first;
  for(int j = first; j < last; ++j) {
    if(v[j] < v[last]) {
      std::swap(v[i], v[j]);
      ++i;
    }
  } std::swap(v[i], v[last]);
    return i;
}

void Quicksort::quicksort(std::vector<int>& v, int first, int last) const{
  if(first >= last)
    return;
  int pivot = split(v, first, last);
  quicksort(v, first, pivot - 1);
  quicksort(v, pivot + 1, last);
}

void Quicksort::sorting_array(std::vector<int>& v) const {
  int size = v.size();
  quicksort(v, 0, size - 1);
}

void Quicksort::printing_array(std::vector<int>& v) const {
  for(int input : v) {
    std::cout << input << " ";
  } std::cout << "\n";
}

int main() {
  Quicksort Quick;
  std::vector<int> input = {2, 4 ,-6, 9, 123, 3, 7, 10, -4};
  int size = input.size();
  std::vector<int> tmp(size,0);
  Quick.sorting_array(input);
  Quick.printing_array(input);

  return 0;
}