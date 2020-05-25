#include "quicksort.hpp"


int main() {
  Quicksort quick;
  std::vector<int> A = {2, 4 ,6, 9, 1, 3, 7};
  int s = A.size();
  std::vector<int> tmp(s,0);
  quick.sort(A);
  quick.print(A);

  return 0;
}