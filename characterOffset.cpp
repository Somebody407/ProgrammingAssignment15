#include "characterOffset.h"
#include <cctype>

char character(char start, int offset) {
    if (!std::isalpha(start)) {
        throw invalidCharacterException("Invalid character.");
    }

    char result = start + offset;

    if (!std::isalpha(result)) {
        throw invalidRangeException("Invalid range.");
    }

    return result;
}