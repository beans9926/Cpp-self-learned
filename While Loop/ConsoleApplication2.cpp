// A while loop example.

#include <iostream>

int main()
{
    int sum, digit;

    sum = 0;
    digit = 1;

    /* Basically how this function works: 
        Do Task 'X' while 'Y" condition is met. 
        
        So the condition here says: 
            While digit is lesser than 100, add digit by itself and store that answer in sum and then increment digit by 1. 
    */
    while (digit <= 100)
    {
        sum += digit;
        digit++;
    }
    
    std::cout << "The sum of numbers between 1 to 100 is: " << sum << std::endl;
}