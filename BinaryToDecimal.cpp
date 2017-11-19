#include <iostream> 
#include <string>
#include <cmath>
 
 
/**
 * Convert string containing a 16-bit binary integer into decimal integer value
 * Recursive
 * @param   bin                 binary integer string
 * @param   current_position    current digit position
 * @param   sum                 total sum
 * @return                      decimal value or value of return recursive call
 */  
int BinToDecimal(std::string bin, int current_position, int sum)
{    
    sum += (bin[7-current_position] - 48) * std::pow(2, current_position);
    
    if (current_position < 7)
        return BinToDecimal(bin, ++current_position, sum);
    else
        return sum;
}
 
 
 
/**
 * Convert string containing a 16-bit binary integer into decimal integer value
 * @param   bin                 binary integer string
 * @return                      decimal value
 */  
int BinToDecimal(std::string bin)
{    
    int sum = 0;
    char bit = 0;
    
    for (int i = 0; i <= 7; ++i)
    {
        bit = (bin[7-i] - 48);
        sum += bit * std::pow(2, i);
    }
    
    return sum;    
}

 
 
int main()
{
    std::cout << BinToDecimal("11110000", 0, 0) << "\n";    
    return 0;
}
