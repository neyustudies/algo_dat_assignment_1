#include "countingsort.hpp"
#include <iostream>


std::vector<unsigned int> Countingsort::countingsort(std::vector<unsigned int>const& A, unsigned int k) const {  
  std::vector<unsigned int> B(A.size(), 0); 
  std::vector<unsigned int> C(k, 0);        

  for(int j = 0; j < A.size(); ++j) {
    C[A[j] - 1]++; 
  }

  for(int i = 1; i < k; ++i) {
    C[i] += C[i - 1]; 
  }   

  for(int j = A.size()-1; j >= 0; --j) {
    B[C[A[j] - 1] - 1] = A[j]; 
    --C[A[j] - 1];
  }

  return B;

} 

std::vector<unsigned int> Countingsort::countingsort(std::vector<unsigned int> const& A) const {
  unsigned int k = 0;
  for (unsigned int n : A) {
      k = n;
  }
  return countingsort(A, k);
}
