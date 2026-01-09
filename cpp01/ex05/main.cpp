#include "Harl.hpp"
#include <iostream>

int main()
{
    Harl harl;
    
    std::cout << "=== HARL COMPLAINT SYSTEM ===" << std::endl;
    std::cout << std::endl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    

    harl.complain("INVALID");
    

    std::cout << "=== TESTING CASE SENSITIVITY ===" << std::endl;
    harl.complain("debug");
    harl.complain("Info");
    

    std::cout << "=== INTERACTIVE TEST ===" << std::endl;
    std::cout << "Enter complaint level (DEBUG/INFO/WARNING/ERROR) or 'quit': ";
    
    std::string input;
    while (std::cin >> input && input != "quit")
    {
        harl.complain(input);
        std::cout << "Enter complaint level (DEBUG/INFO/WARNING/ERROR) or 'quit': ";
    }
    
    return 0;
}