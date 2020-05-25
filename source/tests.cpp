#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include "quicksort.hpp"

TEST_CASE("describe_quicksort", "[quicksort]") {
  
  SECTION("testing small integers") {
    Quicksort q1;
    std::vector<int> s1 = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> s2 = {7, 0, 1, 5, 2, 4, 3};
    std::vector<int> s3 = {0, 2, 4, 6, 8, 10};
    std::vector<int> s4 = {1, 3, 5, 9, 7, 6, 2};
    q1.quicksort(s1, 0, s1.size());
    q1.quicksort(s2, 0, s2.size());
    REQUIRE( std::is_sorted(s1.begin(), s1.end()));
    REQUIRE(!std::is_sorted(s2.begin(), s2.end()));
    REQUIRE( std::is_sorted(s3.begin(), s3.end()));
    REQUIRE(!std::is_sorted(s4.begin(), s4.end()));

  }

  SECTION("testing small negative integers") {
    Quicksort q1;
    std::vector<int> n1 = {-7, -6, -5, -4, -3, -2, -1};
    std::vector<int> n2 = {-7, -0, -1, -5, -2, -4, -3};
    std::vector<int> n3 = {-10, -8, -6, -4, -2, -1};
    std::vector<int> n4 = {-1, -3, -5, -9, -7, -6, -2};
    q1.quicksort(n1, 0, n1.size());
    q1.quicksort(n2, 0, n2.size());
    REQUIRE( std::is_sorted(n1.begin(), n1.end()));
    REQUIRE(!std::is_sorted(n2.begin(), n2.end()));
    REQUIRE( std::is_sorted(n3.begin(), n3.end()));
    REQUIRE(!std::is_sorted(n4.begin(), n4.end()));

  }

  SECTION("testing small duplicate integers") {
    Quicksort q1;
    std::vector<int> d1 = {7, -7, 7, -7, 7, 7, 7};
    std::vector<int> d2 = {1, 1, 1, 1, 2, 2, 2, 2};
    std::vector<int> d3 = {4, 5, 5, 5, 5, 5, 5, 4};
    std::vector<int> d4 = {0, 0, 1, 1, 2, 2, 3, 3};
    q1.quicksort(d1, 0, d1.size());
    q1.quicksort(d2, 0, d2.size());
    REQUIRE(!std::is_sorted(d1.begin(), d1.end()));
    REQUIRE( std::is_sorted(d2.begin(), d2.end()));
    REQUIRE(!std::is_sorted(d3.begin(), d3.end()));
    REQUIRE( std::is_sorted(d4.begin(), d4.end()));

  }



}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
  
}