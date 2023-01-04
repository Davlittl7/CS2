//  Stack class test program
//
//  Tests: Push and pop methods
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(2);
	x.push(3);
	x.pop();

        // VERIFY
        assert(x.top() == 2);
	assert(!x.empty());
     }


    // ADD ADDITIONAL TESTS AS NECESSARY
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("silly");
        x.push("Yaayy");
        x.push("cream");

        // VERIFY
        assert(x.top() == "cream");
	assert(!x.empty());
     }
{
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("cheese");
        x.pop();
        x.push("apples");
	x.push("onions");
	x.pop();

        // VERIFY
        assert(x.top() == "apples");
	assert(!x.empty());
     }
{
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('a');
        x.pop();
        x.push('b');
	x.push('c');

        // VERIFY
        assert(x.top() == 'c');
	assert(!x.empty());
     }

    std::cout << "Done testing push and pop methods." << std::endl;
}

