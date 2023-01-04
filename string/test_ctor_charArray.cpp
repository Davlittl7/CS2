//  String class test program
//
//  Tests: Character array constructor
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

        // TEST
        String  str("abcd");

        // VERIFY
        assert(str == "abcd");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("fjshfhrb");

        // VERIFY
        assert(str == "fjshfhrb");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("ab");

        // VERIFY
        assert(str == "ab");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("cdfgjtyopd");

        // VERIFY
        assert(str == "cdfgjtyopd");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("rhbrhebsfskjf sff");

        // VERIFY
        assert(str == "rhbrhebsfskjf sff");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing Character array constructor." << std::endl;

}

