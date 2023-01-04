// bigint Test Program
//
// Tests:  multiply, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(1);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 1);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(123);
        bigint right(56);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  123);
        assert(right  ==   56);
        assert(result == 6888);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(65);
        bigint right(321);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==    65);
        assert(right  ==   321);
        assert(result == 20865);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(9999);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  9999);
        assert(right  ==     2);
        assert(result == 19998);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(2);
        bigint right(999999);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==       2);
        assert(right  ==  999999);
        assert(result == 1999998);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(99);
        bigint right(99);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  99);
        assert(right  ==  99);
        assert(result ==  9801);
    }


    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("2222");
        bigint right("888888888888888888888888888888888888");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "2222");
        assert(right  == "888888888888888888888888888888888888");
        assert(result == "1975111111111111111111111111111111109136");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("777777777777777777777777777777777777777777777");
        bigint right("333333");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "777777777777777777777777777777777777777777777");
        assert(right  == "333333");
        assert(result == "259258999999999999999999999999999999999999999740741");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("111111111111111111111111111111111111111111");
        bigint right("999999999999999999999999999999999999999999");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "111111111111111111111111111111111111111111");
        assert(right  == "999999999999999999999999999999999999999999");
        assert(result == "111111111111111111111111111111111111111110888888888888888888888888888888888888888889");
    }
    
    //Add test cases as needed.
    {
        //Setup Fixture
        bigint left("20");
        bigint right("5");
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   == "20");
        assert(right  == "5");
        assert(result == "100");
    }
    {
        //Setup Fixture
        bigint left(1250);
        bigint right(200);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   == 1250);
        assert(right  == 200);
        assert(result == 250000);

      }
      {
        //Setup Fixture
        bigint left(88880);
        bigint right(4400);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   == 88880);
        assert(right  == 4400);
        assert(result == 391072000);
      }
      {
        //Setup Fixture
        bigint left("2");
        bigint right("40");
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   =="2");
        assert(right  == "40");
        assert(result == "80");
       }
       {
       //Setup Fixture
        bigint left(47);
        bigint right(3783);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==47);
        assert(right  == 3783);
        assert(result == 177801); 
       }
        {
        //Setup Fixture
        bigint left("0");
        bigint right("400232354252");
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   =="0");
        assert(right  == "400232354252");
        assert(result == "0");
        }
        {
        //Setup Fixture
        bigint left(2875);
        bigint right(2875);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   == 2875);
        assert(right  == 2875);
        assert(result == 8265625);
        }
        {
        //Setup Fixture
        bigint left("8099");
        bigint right("741");
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   =="8099");
        assert(right  == "741");
        assert(result == "6001359");
        }
        {
        //Setup Fixture
        bigint left(1450);
        bigint right(835);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   == 1450);
        assert(right  == 835);
        assert(result == 1210750);
        }
        { 
        //Setup Fixture
        bigint left("3");
        bigint right("432563");
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   =="3");
        assert(right  == "432563");
        assert(result == "1297689");
        }



    std::cout << "Done testing multiply" << std::endl;
}
