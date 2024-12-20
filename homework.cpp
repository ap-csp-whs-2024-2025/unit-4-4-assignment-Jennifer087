#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
    // Complete the homework problems here
    
    // Problem 1
   int number;
    std::cout << "Please enter a number from 1 to 100: ";
    std::cin >> number;

    while (number < 1 || number > 100)
    {
        std::cout << "Invalid number entered. Please enter a number from 1 to 100: ";
        std::cin >> number;
    }
    std::cout << "Thank you for your input!" << std::endl;
    
    // Problem 2
    std::string favoriteColor = "blue";
    std::string guess;
    int attempt = 1;

    std::cout <<"Guess my favorite color: ";
    std::cin >> guess;

    while (guess != favoriteColor)
    {
        std::cout << "Incorrect! Try Again";
        std::cin >> guess; 
        attempt = attempt + 1;
    }
    
    // Problem 3
    int numCount;
    int sum = 0;
    std::cout << "How many numbers would you like to sum? ";
    std::cin >> numCount;

    for (int i = 1; i <= numCount; i = i + 1)
    {
        int num;
        std::cout << "Enter number " << i << ": ";
        std::cin >> num;
        sum = sum + num;
    }

    std::cout << "The sum of all the numbers is: " << sum << std::endl;
    
    return 0;
}
