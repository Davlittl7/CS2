//  Stack class test program
//
//  Tests: Assignment operator
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

        // TEST
        stack<int>  x;
	stack<int> y;
	x.push(23);
	y = x;

        // VERIFY
	assert(!y.empty());
        assert(x.top() == y.top());
    }


    // ADD ADDITIONAL TESTS AS NECESSARY
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  x;
        stack<char> y;
        x.push('c');
        y = x;

        // VERIFY
        assert(!y.empty());
        assert(x.top() == y.top());
    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double>  x;
        stack<double> y;
        y.push(23.77);
        x = y;

        // VERIFY
        assert(!x.empty());
        assert(x.top() == y.top());
    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        stack<int> y;
        x.push(23);
	x.push(46);
        y = x;
	y.pop();

        // VERIFY
        assert(!y.empty());
        assert(x.top() != y.top());
	assert(y.top() == 23);
	assert(x.top() == 46);
    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        stack<String> y;
        x.push("Bravely Default II");
        y = x;

        // VERIFY
        assert(!y.empty());
        assert(x.top() == y.top());
    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        stack<int> y;
        x.push(23);
        y = x;
	x.push(367);

        // VERIFY
        assert(!y.empty());
        assert(x.top() != y.top());
	assert(x.top() == 367);
	assert(y.top() == 23);
    }
 
    std::cout << "Done testing assignment operator." << std::endl;

}

