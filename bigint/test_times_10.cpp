// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times_10(0);

        // Verify
        assert(bi == 3);  //Wrong. Will FAIL, fix and add tests cases
    }
    
    //Add test cases as needed.

    {
      // Setup fixture
      bigint bi(90);

     // Test
     bi = bi.times_10(1);

    // Verify
    assert(bi == 900);

   }

   {
      // Setup fixture
      bigint bi(7);

     // Test
     bi = bi.times_10(3);

    // Verify
    assert(bi == 7000);

   }

   {
      // Setup fixture
      bigint bi(267);

     // Test
     bi = bi.times_10(2);

    // Verify
    assert(bi == 26700);

   }

   {
      // Setup fixture
      bigint bi("48");

     // Test
     bi = bi.times_10(7);

    // Verify
    assert(bi == "480000000");

   }

   {
      // Setup fixture
      bigint bi(2005);

     // Test
     bi = bi.times_10(4);

    // Verify
    assert(bi == 20050000);

   }
   {
      // Setup fixture
      bigint bi("276742");

     // Test
     bi = bi.times_10(0);

    // Verify
    assert(bi == 276742);

   }

   {
      // Setup fixture
      bigint bi(10);

     // Test
     bi = bi.times_10(8);

    // Verify
    assert(bi == 1000000000);

   }
   {
      // Setup fixture
      bigint bi(347);
 
     // Test
     bi = bi.times_10(5);

    // Verify
    assert(bi == 34700000);

   }
   {
      // Setup fixture
      bigint bi("475");

     // Test
     bi = bi.times_10(4);

    // Verify
    assert(bi == 4750000);

   }
   {
      // Setup fixture
      bigint bi(989);

     // Test
     bi = bi.times_10(2);

    // Verify
    assert(bi == 98900);

   }
   {
      // Setup fixture
      bigint bi(6598);

     // Test
     bi = bi.times_10(3);

    // Verify
    assert(bi == 6598000);

   }


    std::cout << "Done testing times_10" << std::endl;
}

