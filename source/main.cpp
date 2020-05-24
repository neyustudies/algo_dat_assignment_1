#include "quicksort.hpp"
#include <iostream>


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
  Quicksort quick;
  std::vector<int> data = {2, 4 ,6, 9, 1, 3, 7};
  int size = data.size();
  std::vector<int> tmp(size,0);
  quick.sorting_array(data);
  quick.printing_array(data);

  std::cin.get();
  return 0;
}