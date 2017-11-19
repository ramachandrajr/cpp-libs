/**
 * 2. Write a function that receives a string containing a 32-bit hexadecimal integer. The function
 * must return the decimal integer value of the hexadecimal integer.
 */


#include <iostream>
#include <string>
#include <cmath>

/**
 * Convert string, 32-bit hex integer into decimal integer value
 * @param   bin                 binary integer string
 * @return                      decimal value
 */  
int HexToDecimal(std::string hex)
{    
    int sum = 0;
    char nibble = 0;
    
    for (int i = 0; i <= 7; ++i)
    {
        nibble = hex[7-i];
        // if digit between characters 0 - 9 
        if (nibble > 47 && nibble < 58)
        {
            // remove 48
            nibble -= 48;
        }
        // if between A to F
        else if (nibble > 64 && nibble < 71)
        {        
            // remove 55
            nibble -= 55;
        }
        
        sum += nibble * std::pow(16, i);
    }
    
    return sum;    
}

 
 
int main()
{
    std::cout << HexToDecimal("0000000A") << "\n";    
    return 0;
}
