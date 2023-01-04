//  Stack class test program
//
//  Tests: Postfix Method
//

#include<cassert>
#include<vector>
#include "stack.hpp"
#include "utilities.cpp"
#include "../string/string.hpp"


//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String x("( AX + ( B * C ) ) ;");

        // TEST
        String y = infix_to_postfix(x);

        // VERIFY
	assert(y == infix_to_postfix(x));
	assert(y == "AX B C * + ");
     }


    // ADD ADDITIONAL TESTS AS NECESSARY
     {
        //------------------------------------------------------
        // SETUP FIXTURE
        String x("( ( AX + ( B * CY ) ) / ( D - E ) ) ;");

        // TEST
        String y = infix_to_postfix(x);

        // VERIFY
        assert(y == infix_to_postfix(x));
        assert(y == "AX B CY * + D E - / ");
     }

 {
        //------------------------------------------------------
        // SETUP FIXTURE
        String x("( ( A + B ) * ( C + E ) ) ;");

        // TEST
        String y = infix_to_postfix(x);

        // VERIFY
        assert(y == infix_to_postfix(x));
        assert(y == "A B + C E + * ");
     }

 {
        //------------------------------------------------------
        // SETUP FIXTURE
        String x("( AX * ( BX * ( ( ( CY + AY ) + BY ) * CX ) ) ) ;");

        // TEST
        String y = infix_to_postfix(x);

        // VERIFY
        assert(y == infix_to_postfix(x));
        assert(y == "AX BX CY AY + BY + CX * * * ");
     }

 {
        //------------------------------------------------------
        // SETUP FIXTURE
        String x("( ( H * ( ( ( ( A + ( ( B + C ) * D ) ) * F ) * G ) * E ) ) + J ) ;");

        // TEST
        String y = infix_to_postfix(x);

        // VERIFY
        assert(y == infix_to_postfix(x));
        assert(y == "H A B C + D * + F * G * E * * J + ");
     }


    std::cout << "Done testing Postfix method." << std::endl;
}

