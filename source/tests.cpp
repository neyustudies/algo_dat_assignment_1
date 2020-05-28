#define CATCH_CONFIG_RUNNER
#include "quicksort.hpp"
#include <catch.hpp>
#include <algorithm>


TEST_CASE("describe_quicksort", "[quicksort]") {

  SECTION("testing default") {
    Quicksort q1;
    std::vector<int> l;
    q1.quicksort(l, 0, l.size() - 1);
    REQUIRE(std::is_sorted(begin(l), end(l)));
  }
 
  SECTION("testing positive integers") {
    Quicksort q1;
    std::vector<int> s1 = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> s2 = {7, 6, 1, 5, 2, 4, 3};
    std::vector<int> s3 = {12, 2, 4, 6, 8, 10};
    std::vector<int> s4 = {1, 3, 5, 9, 7, 6, 2};
    q1.quicksort(s1, 0, s1.size());
    q1.quicksort(s2, 0, s2.size());
    q1.quicksort(s3, 0, s3.size());
    q1.quicksort(s4, 0, s4.size());
    REQUIRE(std::is_sorted(s1.begin(), s1.end())); 
    REQUIRE(std::is_sorted(s2.begin(), s2.end())); 
    REQUIRE(std::is_sorted(s3.begin(), s3.end())); 
    REQUIRE(std::is_sorted(s4.begin(), s4.end())); 
  }

  SECTION("testing negative integers") {
    Quicksort q1;
    std::vector<int> n1 = {-7, -6, -5, -4, -3, -2, -1};
    std::vector<int> n2 = {-7, -0, -1, -5, -2, -4, -3};
    std::vector<int> n3 = {-10, -8, -6, -4, -2, -1};
    std::vector<int> n4 = {-1, -3, -5, -9, -7, -6, -2};
    q1.quicksort(n1, 0, n1.size());
    q1.quicksort(n2, 0, n2.size());
    q1.quicksort(n3, 0, n3.size());
    q1.quicksort(n4, 0, n4.size());
    REQUIRE(std::is_sorted(n1.begin(), n1.end())); 
    REQUIRE(std::is_sorted(n2.begin(), n2.end())); 
    REQUIRE(std::is_sorted(n3.begin(), n3.end())); 
    REQUIRE(std::is_sorted(n4.begin(), n4.end())); 
  }

  SECTION("testing large integers") {               
    Quicksort q1;
    std::vector<int> d1 = {1289145, 1399881, 4698861, -5588933, 2346956, 1279792, -498982};
    std::vector<int> d2 = {4598896, 5598735, 5255724, 352782, 27799768, 57677995, 579773};
    std::vector<int> d3 = {467911, 35686841, -6868891, -2476681, 29799552, 249767, 39723};
    q1.quicksort(d1, 0, d1.size());
    q1.quicksort(d2, 0, d2.size());
    q1.quicksort(d3, 0, d3.size());
    REQUIRE(std::is_sorted(d1.begin(), d1.end()));
    REQUIRE(std::is_sorted(d2.begin(), d2.end()));
    REQUIRE(std::is_sorted(d3.begin(), d3.end()));
  }
}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv); 
}

