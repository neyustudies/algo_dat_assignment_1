#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP
#include <vector>

class Quicksort {
  
  public:
    
    int   split           (std::vector<int>& v, int first, int last) const;
    void  quicksort       (std::vector<int>& v, int first, int last) const;
    void  sorting_array   (std::vector<int>& v) const;
    void  printing_array  (std::vector<int>& v) const;

};


#endif