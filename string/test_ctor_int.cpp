//  String class test program
//
//  Tests: String integer constructor
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

        String  str(10);

        // VERIFY
        assert(str == '\0');
	assert(str.length() == 0 && str.capacity() == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        String  str(25);

        // VERIFY
        assert(str == '\0');
	assert(str.length() == 0 && str.capacity() == 25);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        String  str(30);

        // VERIFY
        assert(str == '\0');
	assert(str.length() == 0 && str.capacity() == 30);
    }
    
    std::cout << "Done testing String int constructor." << std::endl;

}

