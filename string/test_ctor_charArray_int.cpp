//  String class test program
//
//  Tests: Character array int  constructor
//

#include "string.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        String  str(10,"abcd");

        // VERIFY
        assert(str == "abcd");
	assert(str.length() == 4 && str.capacity() == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        String  str(30,"fjshfhrb");

        // VERIFY
        assert(str == "fjshfhrb");
        assert(str.length() == 8 && str.capacity() == 30);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        String  str(15,"ab");

        // VERIFY
        assert(str == "ab");
        assert(str.length() == 2 && str.capacity() == 15);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        String  str(36,"cdfgjtyopd");

        // VERIFY
        assert(str == "cdfgjtyopd");
	assert(str.length() == 10 && str.capacity() == 36);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        String  str(100,"Animal Crackers");

        // VERIFY
        assert(str == "Animal Crackers");
	assert(str.length() == 15 && str.capacity() == 100);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing Character array int constructor." << std::endl;

}

