// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }

                     //WRONG. This will fail, of course.
                    //You need to add more test cases here. Remove this assert.

    
    //Add test cases as needed.
   { 
// Setup fixture
      bigint left(10);
      bigint right(11);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 10);
      assert(right  == 11);
      assert(result == 21);
    }
    {
     // Setup fixture
      bigint left("510");
      bigint right("101");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "510");
      assert(right  == "101");
      assert(result == "611");
    }
    {
 // Setup fixture
      bigint left(123456789);
      bigint right(987654321);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 123456789);
      assert(right  == 987654321);
      assert(result == 1111111110);
    }
    {
 // Setup fixture
      bigint left("1103400");
      bigint right("233");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "1103400");
      assert(right  == "233");
      assert(result == "1103633");
    }
    {
 // Setup fixture
      bigint left("2415");
      bigint right("220411");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "2415");
      assert(right  == "220411");
      assert(result == "222826");
    }
    {
 // Setup fixture
      bigint left(11111111);
      bigint right(22222222);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 11111111);
      assert(right  == 22222222);
      assert(result == 33333333);
    }
    {
 // Setup fixture
      bigint left("0");
      bigint right("3461");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "0");
      assert(right  == "3461");
      assert(result == "3461");
    }
    {
 // Setup fixture
      bigint left(245);
      bigint right(315);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 245);
      assert(right  == 315);
      assert(result == 560);
    }
    {
 // Setup fixture
      bigint left(900651);
      bigint right(2441);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 900651);
      assert(right  == 2441);
      assert(result == 903092);
    }
    {
 // Setup fixture
      bigint left("128");
      bigint right("9671");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "128");
      assert(right  == "9671");
      assert(result == "9799");
    }

    
    std::cout << "Done with testing addition." << std::endl;
}



