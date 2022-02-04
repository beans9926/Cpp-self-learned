// An Example on the usage of for loops.

#include <iostream>

//For loops say that for a certain condition, keep executing a certain loop.
// Use for loops when you know for sure how many times you will have to repeat a certain loop.

int main()
{
    int a[100];
    int i, n, large;                    //definition of variables.
    std::cout << "How many numbers?" << std::endl;
    std::cin >> n;                      //Taking the user's input.

    //Execution of the loop
    for (i = 0; i <= n - 1; ++i){
        std::cin >> a[i];
    }

    large = a[0];                       // Setting of the first term in the array as the largest number.

    for (i = 0; i <= n - 1; ++i){
        if (large < a[i])
            large = a[i];               // Checking if the largest term declared above is larger than the next one, if no, set "large" as the element we just checked with ( a[i] )

    }
    std::cout << "largest value=" << large;
    std::cin.get();
}