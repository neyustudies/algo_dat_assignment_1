#define CATCH_CONFIG_RUNNER
#include "quicksort.hpp"
#include "countingsort.hpp"
#include <catch.hpp>
#include <iostream>


/*----------- Q U I C K S O R T ------------------------------------------------------------------------*/

 TEST_CASE("decribe_quicksort", "[quicksort]") {
  
  SECTION("testing_default") { 
    std::cout << "\nTesting Quicksort Algorithm with different inputs using catch:\n";
    std::cout << "--------------------------------------------------------------\n";
    Quicksort q;
    std::vector<int> l;
    std::cout << "SECTION 01: testing implementation, Array size " << l.size() <<  " ..." <<std::endl;
    q.quicksort(l, 0, l.size() - 1);
    REQUIRE(std::is_sorted(begin(l), end(l)));
  }

  SECTION("positive_integers_part_1") {
    Quicksort q;
    std::vector<int> s1 = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> s2 = {7, 6, 1, 5, 2, 4, 3};
    std::vector<int> s3 = {12, 2, 4, 6, 8, 10, 1};
    std::vector<int> s4 = {1, 3, 5, 9, 7, 6, 2};
    std::cout << "SECTION 02: testing positive numbers, Array size " << s1.size() <<  " ..." <<std::endl;
    q.quicksort(s1, 0, s1.size());
    q.quicksort(s2, 0, s2.size());
    q.quicksort(s3, 0, s3.size());
    q.quicksort(s4, 0, s4.size());
    REQUIRE(std::is_sorted(s1.begin(), s1.end())); 
    REQUIRE(std::is_sorted(s2.begin(), s2.end())); 
    REQUIRE(std::is_sorted(s3.begin(), s3.end())); 
    REQUIRE(std::is_sorted(s4.begin(), s4.end())); 
  }
 
  SECTION("positive_integers_part_2") {
    Quicksort q;
    std::vector<int> s1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::vector<int> s2 = {7, 6, 1, 5, 2, 4, 3, 9, 8, 12};
    std::vector<int> s3 = {12, 2, 4, 6, 8, 10, 1, 11, 14};
    std::vector<int> s4 = {1, 3, 5, 9, 7, 6, 2, 8, 0, 4};
    std::cout << "SECTION 03: testing positive numbers, Array size " << s1.size() <<  " ..." <<std::endl;
    q.quicksort(s1, 0, s1.size());
    q.quicksort(s2, 0, s2.size());
    q.quicksort(s3, 0, s3.size());
    q.quicksort(s4, 0, s4.size());
    REQUIRE(std::is_sorted(s1.begin(), s1.end())); 
    REQUIRE(std::is_sorted(s2.begin(), s2.end())); 
    REQUIRE(std::is_sorted(s3.begin(), s3.end())); 
    REQUIRE(std::is_sorted(s4.begin(), s4.end())); 
  }

  SECTION("negative_integers_part_1") {
    Quicksort q;
    std::vector<int> s1 = {-1, -2, -3, -4};
    std::vector<int> s2 = {-7, -6, -1, -5};
    std::vector<int> s3 = {-12, -2, -4, -6};
    std::vector<int> s4 = {-1, -3, -5, -9};
    std::cout << "SECTION 04: testing negative numbers, Array size " << s1.size() <<  " ..." <<std::endl;
    q.quicksort(s1, 0, s1.size());
    q.quicksort(s2, 0, s2.size());
    q.quicksort(s3, 0, s3.size());
    q.quicksort(s4, 0, s4.size());
    REQUIRE(std::is_sorted(s1.begin(), s1.end())); 
    REQUIRE(std::is_sorted(s2.begin(), s2.end())); 
    REQUIRE(std::is_sorted(s3.begin(), s3.end())); 
    REQUIRE(std::is_sorted(s4.begin(), s4.end())); 
  }

  SECTION("negative_integers_part_2") {
    Quicksort Q;
    std::vector<int> n1 = {-7, -6, -5, -4, -3, -2, -1};
    std::vector<int> n2 = {-7, 0, -1, -5, -2, -4, -3};
    std::vector<int> n3 = {-10, -8, -6, -4, -2, -1};
    std::vector<int> n4 = {-1, -3, -5, -9, -7, -6, -2};
    std::cout << "SECTION 05: testing negative numbers, Array size " << n1.size() <<  " ..." <<std::endl;
    Q.quicksort(n1, 0, n1.size());
    Q.quicksort(n2, 0, n2.size());
    Q.quicksort(n3, 0, n3.size());
    Q.quicksort(n4, 0, n4.size());
    REQUIRE(std::is_sorted(n1.begin(), n1.end())); 
    REQUIRE(std::is_sorted(n2.begin(), n2.end())); 
    REQUIRE(std::is_sorted(n3.begin(), n3.end())); 
    REQUIRE(std::is_sorted(n4.begin(), n4.end())); 
  }


  SECTION("negative_integers_part_3") {
    Quicksort q;
    std::vector<int> s1 = {-1, -2, -3, -4, -5, -6, -7, -8, -9, 0};
    std::vector<int> s2 = {-7, -6, -1, -5, -2, -4, -3, -9, -8, -12};
    std::vector<int> s3 = {-12, -2, -4, -6, -8, -10, -1, -11, -14};
    std::vector<int> s4 = {-1, -3, -5, -9, -7, -6, -2, -8, 0, -4};
    std::cout << "SECTION 06: testing negative numbers, Array size " << s1.size() <<  " ..." <<std::endl;
    q.quicksort(s1, 0, s1.size());
    q.quicksort(s2, 0, s2.size());
    q.quicksort(s3, 0, s3.size());
    q.quicksort(s4, 0, s4.size());
    REQUIRE(std::is_sorted(s1.begin(), s1.end())); 
    REQUIRE(std::is_sorted(s2.begin(), s2.end())); 
    REQUIRE(std::is_sorted(s3.begin(), s3.end())); 
    REQUIRE(std::is_sorted(s4.begin(), s4.end())); 
  }

  SECTION("mixed_integers", "[quicksort]") {
    Quicksort q;
    std::vector<int> s1 = {1, 2, -3, 4, -5, 6, -7, -8, -9, -0};
    std::vector<int> s2 = {-7, 6, -1, 5, -2, 4, -3, 9, 8, -12};
    std::vector<int> s3 = {12, -2, 4, -6, -8, -10, 1, 11, 14};
    std::vector<int> s4 = {-1, 3, -5, 9, -7, 6, -2, 8, -0, -4};
    std::cout << "SECTION 07: testing mixed numbers, Array size " << s1.size() <<  " ..." <<std::endl;
    q.quicksort(s1, 0, s1.size());
    q.quicksort(s2, 0, s2.size());
    q.quicksort(s3, 0, s3.size());
    q.quicksort(s4, 0, s4.size());
    REQUIRE(std::is_sorted(s1.begin(), s1.end())); 
    REQUIRE(std::is_sorted(s2.begin(), s2.end())); 
    REQUIRE(std::is_sorted(s3.begin(), s3.end())); 
    REQUIRE(std::is_sorted(s4.begin(), s4.end())); 
  }

  SECTION("testing_large_integers_part_1") {  
    Quicksort q;            
    std::vector<int> d1 = {1288145, 13979881, 469881};
    std::vector<int> d2 = {4578896, 559835, 525724};
    std::vector<int> d3 = {4676911, 3486841, -686891};
    std::cout << "SECTION 08: testing large numbers, Array size " << d1.size() <<  " ..." <<std::endl;
    q.quicksort(d1, 0, d1.size());
    q.quicksort(d2, 0, d2.size());
    q.quicksort(d3, 0, d3.size());
    REQUIRE(std::is_sorted(d1.begin(), d1.end()));
    REQUIRE(std::is_sorted(d2.begin(), d2.end()));
    REQUIRE(std::is_sorted(d3.begin(), d3.end()));
  }

  SECTION("testing_large_integers_part_2") {  
    Quicksort q;             
    std::vector<int> d1 = {129145, 139881, 468861, -58933, 46956, 127992, -49982};
    std::vector<int> d2 = {459896, 558735, 525724, 352782, 299768, 5777995, 579773};
    std::vector<int> d3 = {467911, 356841, -68891, -2476681, 299552, 249767, 39723};
    std::cout << "SECTION 09: testing large numbers, Array size " << d1.size() <<  " ..." <<std::endl;
    q.quicksort(d1, 0, d1.size());
    q.quicksort(d2, 0, d2.size());
    q.quicksort(d3, 0, d3.size());
    REQUIRE(std::is_sorted(d1.begin(), d1.end()));
    REQUIRE(std::is_sorted(d2.begin(), d2.end()));
    REQUIRE(std::is_sorted(d3.begin(), d3.end()));
  }

  SECTION("testing_large_integers_part_3") {  
    Quicksort q;             
    std::vector<int> d1 = {129145, 139881, 468861, -58933, 46956, 127992, -49982};
    std::vector<int> d2 = {459896, 558735, 525724, 352782, 299768, 5777995, 579773};
    std::vector<int> d3 = {467911, 356841, -68891, -2476681, 299552, 249767, 39723};  
    std::cout << "SECTION 10: testing large numbers, Array size " << d1.size() <<  " ..." <<std::endl;
    q.quicksort(d1, 0, d1.size());
    q.quicksort(d2, 0, d2.size());
    q.quicksort(d3, 0, d3.size());
    REQUIRE(std::is_sorted(d1.begin(), d1.end()));
    REQUIRE(std::is_sorted(d2.begin(), d2.end()));
    REQUIRE(std::is_sorted(d3.begin(), d3.end()));
  }
}

/*------------ C O U N T I N G - S O R T ---------------------------------------------------------------*/


 TEST_CASE("testing_inputs_for_countingsort", "[countingsort]") {

  SECTION("small_integers_part_1_c") {
    std::cout << "\nTesting Countingsort Algorithm with different inputs using catch:\n";
    std::cout << "-----------------------------------------------------------------\n";
    Countingsort d;
    std::vector<unsigned int> expected = {1, 2, 3, 4, 5};
    std::vector<unsigned int> a        = {5, 4, 3, 2, 1};
    std::vector<unsigned int> b        = {1, 3, 2, 5, 4};
    std::vector<unsigned int> c        = {5, 1, 2, 4, 3};
    std::cout << "SECTION 01: testing small numbers, Array size " << a.size() <<  " ..." << std::endl;
    REQUIRE(d.countingsort(a) == expected);
    REQUIRE(d.countingsort(b) == expected);
    REQUIRE(d.countingsort(c) == expected);
  }

   SECTION("small_integers_part_2_c") {
    Countingsort c;
    std::vector<unsigned int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<unsigned int> s2       = {7, 6, 9, 8, 10, 4, 3, 5, 2, 1};
    std::vector<unsigned int> s3       = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    std::vector<unsigned int> s4       = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    std::cout << "SECTION 02: testing small numbers, Array size " << s2.size() <<  " ..." << std::endl;
    REQUIRE(c.countingsort(s2) == expected);
    REQUIRE(c.countingsort(s3) == expected);
    REQUIRE(c.countingsort(s4) == expected);
  }

  SECTION("small_integers_part_3_c") {
    Countingsort c;
    std::vector<unsigned int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    std::vector<unsigned int> s2       = {7, 6, 9, 8, 10, 4, 3, 5, 2, 1, 14, 11, 13, 12};
    std::vector<unsigned int> s3       = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 14, 13, 12, 11};
    std::vector<unsigned int> s4       = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10, 11, 13, 14, 12};
    std::cout << "SECTION 03: testing small numbers, Array size " << s2.size() <<  " ..." <<std::endl;
    REQUIRE(c.countingsort(s2) == expected);
    REQUIRE(c.countingsort(s3) == expected);
    REQUIRE(c.countingsort(s4) == expected);
  }

  SECTION("large_integers_part_1_c") {
    Countingsort c;
    std::vector<unsigned int> expected = {1000, 2000, 3000, 4000, 5000, 6000};
    std::vector<unsigned int> s2       = {3000, 2000, 1000, 5000, 6000, 4000};
    std::vector<unsigned int> s3       = {6000, 5000, 4000, 3000, 2000, 1000};
    std::vector<unsigned int> s4       = {4000, 1000, 6000, 5000, 2000, 3000};
    std::cout << "SECTION 04: testing large numbers, Array size " << s2.size() <<  " ..." <<std::endl;
    REQUIRE(c.countingsort(s2) == expected);
    REQUIRE(c.countingsort(s3) == expected);
    REQUIRE(c.countingsort(s4) == expected);
  }

  SECTION("large_integers_part_2_c") {
    Countingsort c;
    std::vector<unsigned int> expected = {100000, 200000, 300000, 400000, 500000, 600000, 700000};
    std::vector<unsigned int> s2       = {300000, 200000, 100000, 500000, 600000, 400000, 700000};
    std::vector<unsigned int> s3       = {600000, 500000, 400000, 300000, 200000, 100000, 700000};
    std::vector<unsigned int> s4       = {400000, 100000, 600000, 500000, 200000, 300000, 700000};
    std::cout << "SECTION 05: testing large numbers, Array size " << s2.size() <<  " ..." <<std::endl;
    REQUIRE(c.countingsort(s2) == expected);
    REQUIRE(c.countingsort(s3) == expected);
    REQUIRE(c.countingsort(s4) == expected);
  }

}
 
int main(int argc, char *argv[]) {
  return Catch::Session().run(argc, argv); 
} 
