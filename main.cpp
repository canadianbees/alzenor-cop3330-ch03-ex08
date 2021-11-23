#include "std_lib_facilities.h"
#include <iostream>

//function that returns 1 if number is odd or 2 if number is odd
int evenOrOdd(int n)
{
    if(n % 2 == 0)
    {
        return 2;
    }

    else
    {
        return 1;
    }
}

int main() {

    int number;

    //prompts user to enter a number
    std::cout << "Enter a number:";
    std::cin >> number;

    //if two is returned, the number is even
    if(evenOrOdd(number) == 2)
    {
        std::cout <<number <<" is even." ;
    }

    //it is odd
    else
    {
        std::cout <<number<<" is odd." ;
    }

    return 0;
}