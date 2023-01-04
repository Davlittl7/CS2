//  Stack class test program
//
//  Tests: Default Constructor
//

#include "stack.hpp"
#include "../string/string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x, y;

        // VERIFY
        assert(x.empty());
	assert(y.empty());
    }


    // ADD ADDITIONAL TESTS AS NECESSARY
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x, y;

        // VERIFY
        assert(x.empty());
        assert(y.empty());
    }
     {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  x, y;

        // VERIFY
        assert(x.empty());
        assert(y.empty());
    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double>  x, y;

        // VERIFY
        assert(x.empty());
        assert(y.empty());
    }





    std::cout << "Done testing default constructor." << std::endl;

}

