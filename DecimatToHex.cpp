/**
 * Write a function that receives an integer. The function must return a string
 * containing the hexadecimal representation of the integer.
 */

#include <iostream>
#include <string>
#include <cmath>



std::string IntToHex(int integer)
{    
    const std::string symbols = "0123456789ABCDEF";
    std::string hex = "";
    
    while (1)
    {
    
        // if integer is 1
        if (integer < 16)
        {
            // add 1 to start binary and exit loop
            hex = symbols[integer] + hex;
            break;
        }        
        // else
        else
        {   
            // add remainder to start of bin
            hex = symbols[integer % 16] + hex;
            
            // set integer to its / 2 quotient
            integer /= 16;            
        }
        
    }
    
    return hex;
}

 
 
int main()
{
    std::cout << IntToHex(23) << "\n";    
    return 0;
}
