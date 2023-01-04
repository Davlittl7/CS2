//  String class test program
//
//  Name: test_concat.cpp
//  Tests: + and += (concatenation) operator
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
        String  left("abc");
        String  right("def");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "abcdef");
        assert(left   == "abc");
        assert(right  == "def");
	assert(result.length() == left.length() + right.length());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  right("cheese");

        // TEST
        String result = ("I like " + right);

        // VERIFY
        assert(result == "I like cheese");
        assert(right  == "cheese");

    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left('a');

        // TEST
        String result = (left + 'b');

        // VERIFY
        assert(result == "ab");
        assert(left   == 'a');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("akjfjfbjakebajekbfjefba");
        String  right("chsfehfe");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "akjfjfbjakebajekbfjefbachsfehfe");
        assert(left   == "akjfjfbjakebajekbfjefba");
        assert(right  == "chsfehfe");
        assert(result.length() == left.length() + right.length());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("ghtds");
        String  right("cabi");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "ghtdscabi");
        assert(left   == "ghtds");
        assert(right  == "cabi");
        assert(result.length() == left.length() + right.length());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("cccc");
        String  right("aaaaaaaaaaaaa");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "ccccaaaaaaaaaaaaa");
        assert(left   == "cccc");
        assert(right  == "aaaaaaaaaaaaa");
    }
    

    // ADD ADDITIONAL TESTS AS NECESSARY
{
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("I want ");
        String  right("some roses");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "I want some roses");
        assert(left   == "I want ");
        assert(right  == "some roses");
    }

{
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("I can't wait");
        String  right(" for summer");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "I can't wait for summer");
        assert(left   == "I can't wait");
        assert(right  == " for summer");
    }

{
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("I need some ");
        String  right("juice");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "I need some juice");
        assert(left   == "I need some ");
        assert(right  == "juice");
    }

{
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("cheese & ");
        String  right("milk");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "cheese & milk");
        assert(left   == "cheese & ");
        assert(right  == "milk");
    }

{
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("saljaajf aekj fejkf jwebfj fjw");
        String  right("hhh");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "saljaajf aekj fejkf jwebfj fjwhhh");
        assert(left   == "saljaajf aekj fejkf jwebfj fjw");
        assert(right  == "hhh");
    }

{
        //------------------------------------------------------
        // SETUP FIXTURE
        String  right("hhh");

        // TEST
        String result = ('a' + right);

        // VERIFY
        assert(result == "ahhh");
        assert(right  == "hhh");
    }

{
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("cheese & ");
        String  right("milkies");

        // TEST
        left += right;

        // VERIFY
        assert(left == "cheese & milkies");
        assert(right  == "milkies");

    }
    
    std::cout << "Done testing concatenation operators" << std::endl;
}


