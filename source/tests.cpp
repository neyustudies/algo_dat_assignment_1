#define CATCH_CONFIG_RUNNER
#include <stdlib.h>
#include <catch.hpp>
#include "quicksort.hpp"

TEST_CASE("describe_quicksort", "[quicksort]") {
  
  SECTION("testing small integers") {
    Quicksort q1;
    std::vector<int> s1 = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> s2 = {7, 0, 1, 5, 2, 4, 3};
    q1.quicksort(s1, 0, s1.size());
    q1.quicksort(s2, 0, s2.size());
    REQUIRE(std::is_sorted(s1.begin(), s1.end()));
    REQUIRE(std::is_sorted(s2.begin(), s2.end()));

  }



}

int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv);
  
}