//  String class test program
//
//  Tests: Character constructor
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
        String  str('c');

        // VERIFY
        assert(str == 'c');
	assert(str.length() == 1 && str.capacity() == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('a');

        // VERIFY
        assert(str == 'a');
        assert(str.length() == 1 && str.capacity() == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('1');

        // VERIFY
        assert(str == '1');
        assert(str.length() == 1 && str.capacity() == 1);

    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('\0');

        // VERIFY
        assert(str == '\0' && str.length() == 0 && str.capacity() == 0);
    }
    
    std::cout << "Done testing Character constructor." << std::endl;

}

