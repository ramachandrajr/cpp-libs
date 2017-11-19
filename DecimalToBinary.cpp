/*
 * Write a function that receives an integer. The function must return a string containing the
 * binary representation of the integer.
 */

#include <iostream>
#include <string>
#include <cmath>



std::string IntToBin(int integer)
{    
    std::string bin = "";
    
    while (1)
    {
    
        // if integer is 1
        if (integer == 1)
        {
            // add 1 to start binary and exit loop
            bin = "1" + bin;
            break;
        }        
        // else
        else
        {   
            // add remainder to start of bin
            bin = (integer % 2 == 0) ? "0"+bin : "1"+bin;
            
            // set integer to its / 2 quotient
            integer /= 2;            
        }
        
    }
    
    return bin;
}

 
 
int main()
{
    std::cout << IntToBin(23) << "\n";    
    return 0;
}
