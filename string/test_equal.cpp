//  String class test program
//
//  Name: test_equal.cpp
//  Tests: == operator
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
        String  left('a');
        String  right('a');

        // TEST
        bool result = (left ==  right);

        // VERIFY
        assert(result == true);
        assert(left   == 'a');
        assert(right  == 'a');
	assert(left.length() == right.length() && left.capacity() == right.capacity());
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left;
        String  right;

        // TEST
        bool result = (left ==  right);

        // VERIFY
        assert(result == true);
        assert(left   == "");
        assert(right  == "");
        assert(left.length() == right.length() && left.capacity() == right.capacity());
    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("abcdef");
        String  right("chdhsfefe");

        // TEST
        bool result = (left !=  right);

        // VERIFY
        assert(result == true);
        assert(left   == "abcdef");
        assert(right  == "chdhsfefe");
        assert(left.length() != right.length() && left.capacity() != right.capacity());

    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("ajkbbjfabwkjab kjagbga rgak ga kjrgbag");
        String  right("ajkbbjfabwkjab kjagbga rgak ga kjrgbag");

        // TEST
        bool result = (left ==  right);

        // VERIFY
        assert(result == true);
        assert(left   == "ajkbbjfabwkjab kjagbga rgak ga kjrgbag");
        assert(right  == "ajkbbjfabwkjab kjagbga rgak ga kjrgbag");
	assert(left.length() == right.length() && left.capacity() == right.capacity());

    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("23 24 25 26");
        String  right("23 27 24 25");

        // TEST
        bool result = (left !=  right);

        // VERIFY
        assert(result == true);
        assert(left   == "23 24 25 26");
        assert(right  == "23 27 24 25");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("akjaebskjg");
        String  right("akjaebskjg");

        // TEST
        bool result = (left ==  right);

        // VERIFY
        assert(result == true);
        assert(left   == "akjaebskjg");
        assert(right  == "akjaebskjg");
    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("abcdefghi");
        String  right("chdhsfefejwind");

        // TEST
        bool result = (left !=  right);

        // VERIFY
        assert(result == true);
        assert(left   == "abcdefghi");
        assert(right  == "chdhsfefejwind");
    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("I hate chocolate");
        String  right("I hate chocolate");

        // TEST
        bool result = (left ==  right);

        // VERIFY
        assert(result == true);
        assert(left   == "I hate chocolate");
        assert(right  == "I hate chocolate");
        assert(left.length() == right.length() && left.capacity() == right.capacity());
    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Cat");
        String  right("Dog");

        // TEST
        bool result = (left !=  right);

        // VERIFY
        assert(result == true);
        assert(left   == "Cat");
        assert(right  == "Dog");
    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE
	String  right("abe did it man I'm telling you.");

        // TEST
        bool result = ("abe did it man I'm telling you." ==  right);

        // VERIFY
        assert(result == true);
        assert(right  == "abe did it man I'm telling you.");
    }

    std::cout << "Done testing == operator." << std::endl;
}

