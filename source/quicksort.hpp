#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP
#include <vector>


class Quicksort {
  
  public:

    unsigned int   partition   (std::vector<int>& A, int p, int r) const;
    void  quicksort   (std::vector<int>& A, int p, int r) const;

};


#endif