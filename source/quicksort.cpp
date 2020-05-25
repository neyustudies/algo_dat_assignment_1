#include "quicksort.hpp"
#include <algorithm>


void Quicksort::quicksort(std::vector<int>& A, int p, int r) const {
  if(p < r) {
    int q = partition(A, p, r);
    quicksort(A, p, q - 1);
    quicksort(A, q + 1, r);
  }
}

int Quicksort::partition(std::vector<int>& A, int p, int r) const {
  auto x = A[r];
  int i = p - 1;
  for(int j = p; j < r; ++j) {
    if(A[j] <= x) {
      std::swap(A[i], A[j]);
      ++i;
    } std::swap(A[i], A[r]);
      return i;
  }

  return 0;
} 


