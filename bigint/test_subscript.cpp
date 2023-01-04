// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);  //Wrong.  Will FAIL.  Fix and add test cases.
        assert(digit == 4);
    }
    
    //Add test cases!!
 {
        // Setup
        bigint bi("29834");

        // Test
        int digit = bi[3];

        // Verify
        assert(bi    == "29834");  
        assert(digit == 9);
    }

 {
        // Setup
        bigint bi(24);

        // Test
        int digit = bi[1];

        // Verify
        assert(bi    == 24);
        assert(digit == 2);
    }

 {
        // Setup
        bigint bi(10034);

        // Test
        int digit = bi[0];

        // Verify
        assert(bi    == 10034);
        assert(digit == 4);
    }

 {
        // Setup
        bigint bi(3459024);

        // Test
        int digit = bi[4];

        // Verify
        assert(bi    == 3459024);
        assert(digit == 5);
    }

 {
        // Setup
        bigint bi("78612");

        // Test
        int digit = bi[2];

        // Verify
        assert(bi    == "78612");
        assert(digit == 6);
    }

 {
        // Setup
        bigint bi(700);

        // Test
        int digit = bi[1];

        // Verify
        assert(bi    == 700);
        assert(digit == 0);
    } 

 {
        // Setup
        bigint bi(3002487);

        // Test
        int digit = bi[6];

        // Verify
        assert(bi    == 3002487);
        assert(digit == 3);
    }

 {
        // Setup
        bigint bi(1439443925);

        // Test
        int digit = bi[4];

        // Verify
        assert(bi    == 1439443925);
        assert(digit == 4);
    }

 {
        // Setup
        bigint bi("298345785363");

        // Test
        int digit = bi[3];

        // Verify
        assert(bi    == "298345785363");
        assert(digit == 5);
    }

 {
        // Setup
        bigint bi("235674000033441");

        // Test
        int digit = bi[7];

        // Verify
        assert(bi    == "235674000033441");
        assert(digit == 0);
    }

 {
        // Setup
        bigint bi(28906);

        // Test
        int digit = bi[3];

        // Verify
        assert(bi    == 28906);
        assert(digit == 8);
    }


    std::cout << "Done testing subscript." << std::endl;
}

