//  String class test program
//
//  Tests: Default Constructor
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
        String  str;

        // VERIFY
        assert(str == "");
	assert(str.length() == 0 && str.capacity() == 0);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing Default Constructor." << std::endl;

}

