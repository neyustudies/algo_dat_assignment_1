#ifndef COUNTINGSORT_HPP
#define COUNTINGSORT_HPP
#include <vector>


class Countingsort {

  public:
  
    std::vector<unsigned int>  countingsort  (std::vector<unsigned int> const& A) const;
    std::vector<unsigned int>  countingsort  (std::vector<unsigned int> const& A, unsigned int k) const;

};


#endif
