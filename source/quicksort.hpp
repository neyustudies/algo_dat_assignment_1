#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP
#include <vector>
#include <algorithm>

class Quicksort {
  
  public:

    int   partition   (std::vector<int>& A, int p, int r) const;
    void  quicksort   (std::vector<int>& A, int p, int r) const;
    void  sort        (std::vector<int>& A) const;
    void  print       (std::vector<int>& A) const;

};


#endif