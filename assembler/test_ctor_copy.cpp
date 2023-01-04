//  Stack class test program
//
//  Tests: Copy Constructor
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
	x.push(27);
	x.push(36);
	stack<int> y(x);

	

        // VERIFY
	assert(y.top() == x.top());
    }


    // ADD ADDITIONAL TESTS AS NECESSARY
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.push("sleep"); 
        x.push("nice");
        stack<String> y(x);



        // VERIFY
        assert(y.top() == x.top());
    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double>  x;
        x.push(27.88);
        x.push(36.95);
        stack<double> y(x);



        // VERIFY
        assert(y.top() == x.top());
    }
 {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  x;
        x.push('d');
        x.push('f');
        stack<char> y(x);



        // VERIFY
        assert(y.top() == x.top());
    }
 
    std::cout << "Done testing copy constructor." << std::endl;

}

