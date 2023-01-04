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
        bi = bi.times_digit(1);

        // Verify
        assert(bi == 3);  //Will FAIL, fix and add test cases.
    }


    //Add test cases as needed.
    
    {
        // Setup fixture
        bigint bi(9);

        // Test
        bi = bi.times_digit(5);

        // Verify
        assert(bi == 45);
    }

    {
        // Setup fixture
        bigint bi(30);

        // Test
        bi = bi.times_digit(4);

        // Verify
        assert(bi == 120);
    }
    {
        // Setup fixture
        bigint bi(463);

        // Test
        bi = bi.times_digit(7);

        // Verify
        assert(bi == 3241);
    }
    {
        // Setup fixture
        bigint bi("54473");

        // Test
        bi = bi.times_digit(3);

        // Verify
        assert(bi == 163419);
    }
    {
        // Setup fixture
        bigint bi(25);

        // Test
        bi = bi.times_digit(9);

        // Verify
        assert(bi == 225);
    }
    {
        // Setup fixture
        bigint bi(74);

        // Test
        bi = bi.times_digit(8);

        // Verify
        assert(bi == 592);
    }
    {
        // Setup fixture
        bigint bi("65");

        // Test
        bi = bi.times_digit(7);

        // Verify
        assert(bi == 455);
    }
    {
        // Setup fixture
        bigint bi(300245);

        // Test
        bi = bi.times_digit(2);

        // Verify
        assert(bi == 600490);
    }
    {
        // Setup fixture
        bigint bi(675);

        // Test
        bi = bi.times_digit(6);

        // Verify
        assert(bi == 4050);
    }
    {
        // Setup fixture
        bigint bi(525);

        // Test
        bi = bi.times_digit(5);

        // Verify
        assert(bi == 2625);
    }
    {
        // Setup fixture
        bigint bi("365354378");

        // Test
        bi = bi.times_digit(4);

        // Verify
        assert(bi == 1461417512);
    }
    std::cout << "Done testing bigint * digit" << std::endl;
}


