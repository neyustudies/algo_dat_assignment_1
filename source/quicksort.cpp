#include "quicksort.hpp"


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


