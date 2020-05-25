#include "quicksort.hpp"
#include <iostream>


void Quicksort::quicksort(std::vector<int>& A, int p, int r) const{
  if(p >= r)
    return;
  int q = partition(A, p, r);
  quicksort(A, p, q - 1);
  quicksort(A, q + 1, r);
}

int Quicksort::partition(std::vector<int>& A, int p, int r) const {
  int x = (p + r) / 2;
  std::swap(A[x], A[r]);
  int i = p;
  for(int j = p; j < r; ++j) {
    if(A[j] < A[r]) {
      std::swap(A[i], A[j]);
      ++i;
    }
  } std::swap(A[i], A[r]);
    return i;
}

void Quicksort::sort(std::vector<int>& A) const {
  int s = A.size();
  quicksort(A, 0, s - 1);
}

void Quicksort::print(std::vector<int>& A) const {
  for(int i : A) {
    std::cout << i << " ";
  } std::cout << "\n";
}


