// somebody407 (would rather not use my real name since its public :/)
// CIS 1202 800
// July 31, 2024

#include <iostream>
#include "CharacterOffset.h"

int main() {
    char start;
    int offset;

    std::cout << "Enter a character: ";
    std::cin >> start;

    std::cout << "Enter an offset: ";
    std::cin >> offset;

    try {
        char result = character(start, offset);
        std::cout << "Resulting character: " << result << std::endl;
    }
    catch (const invalidCharacterException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    catch (const invalidRangeException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}