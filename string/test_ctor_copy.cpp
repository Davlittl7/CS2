//  String class test program
//
//  Tests: Copy constructor
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
        String  a('c');
	String  b = a;


        // VERIFY
        assert( b == a && a.length() == b.length() && a.capacity() == b.capacity());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  a('\0');
	String b = a;
        // VERIFY
        assert(b == a && a.length() == b.length() && a.capacity() ==  b.capacity());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  a("abcdefghijklmnop");
	String  b = a;

        // VERIFY
        assert(b == a && a.length() == b.length() && a.capacity() == b.capacity());
    }
    
    std::cout << "Done testing Copy constructor." << std::endl;

}

